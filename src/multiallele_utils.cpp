#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::interfaces(r, cpp)]]

// Utilities for working with multiallelic genotypes.

// Compiled version of the dmultinom function from R, using some of the same
// source code.  Performs much less error checking than the R version.
// [[Rcpp::export]]
double dmultinom(NumericVector x, NumericVector prob){
  double out;
  double logout;
  LogicalVector nonzero = prob > 0;
  x = x[nonzero];
  prob = prob[nonzero];
  
  logout = lgamma(sum(x) + 1) + sum(x * log(prob) - lgamma(x + 1));
  out = exp(logout);
  
  return out;
}

// Probability distrubution under the Dirichlet multinomial.
// For estimating genotype likelihoods under overdispersion.
// [[Rcpp::export]]
double dDirichletMultinom(NumericVector x, NumericVector prob, double alpha){
  LogicalVector nonzero = prob > 0;
  x = x[nonzero];
  prob = prob[nonzero];
  double n = sum(x);
  double tot = lgamma(n + 1) + lgamma(alpha) - lgamma(n + alpha);
  NumericVector alphas = alpha * prob;
  double ind = sum(lgamma(x + 1) + lgamma(alphas) - lgamma(alphas + x));
  return exp(tot - ind);
}

// Function to get number of possible genotypes.
// (ploidy + nalleles - 1)!/(ploidy! * (nalleles - 1)!)
// [[Rcpp::export]]
int nGen(int ploidy, int nalleles) {
  // Adding 0.5 is necessary because of floating point math error and
  // truncation to integer.
  return exp(lgamma(ploidy + nalleles) - lgamma(ploidy + 1) - lgamma(nalleles)) + 0.5;
}

// Function to enumerate genotypes in the VCF order.
// Each row of output matrix is one genotype.
// The matrix has as many columns as the ploidy.
// Each cell contains the index of an allele that the genotype has.
// [[Rcpp::export]]
IntegerMatrix enumerateGenotypes(int ploidy, int nalleles){
  int ngen = nGen(ploidy, nalleles);
  IntegerMatrix out(ngen, ploidy);
  int startrow;
  IntegerMatrix submat;
  
  // a is allele, r is row, and c is column.
  for(int a = 0; a < nalleles; a++){
    if(ploidy == 1){
      out(a, 0) = a;
    } else {
      startrow = nGen(ploidy, a);
      submat = enumerateGenotypes(ploidy - 1, a + 1);
      for(int r = 0; r < submat.nrow(); r++){
        out(r + startrow, ploidy - 1) = a;
        for(int c = 0; c < ploidy - 1; c++){
          out(r + startrow, c) = submat(r, c);
        }
      }
    }
  }
  
  return out;
}

// Get the index of a given genotype, i.e. the row that the genotype would
// appear in, in the matrix output by enumerateGenotypes.
// [[Rcpp::export]]
int indexGenotype(IntegerVector genotype){
  int ploidy = genotype.size();
  int out = 0;
  int g;
  for(int m = 1; m < ploidy + 1; m++){
    g = genotype(m - 1);
    out += Rf_choose(g + m - 1, m);
  }
  return out;
}

// Given a genotype index, output the genotype, without having to generate
// the matrix of all possible genotypes.
// [[Rcpp::export]]
IntegerVector genotypeFromIndex(int index, int ploidy){
  IntegerVector out(ploidy);
  int nal; // number of alleles
  
  // work backwards from last allele in the genotype
  for(int p = ploidy; p > 0; p--){
    nal = 1;
    while(nGen(p, nal) < index + 1){
      nal++;
    }
    out(p - 1) = nal - 1;
    index -= nGen(p, nal - 1);
  }
  
  return out;
}

// Get the copy number of each allele in a given genotype.
// Useful for converting genotypes exported by enumerateGenotypes to
// a format useful for multinomial probability calculations.
// [[Rcpp::export]]
IntegerVector alleleCopy(IntegerVector genotype, int nalleles){
  IntegerVector out (nalleles);
  int ploidy = genotype.size();
  int g;
  
  for(int i = 0; i < ploidy; i++){
    g = genotype(i);
    out(g)++;
  }
  
  return out;
}

// Internal, recursive function for generating gamete genotypes
IntegerMatrix makeGametesRecur(IntegerVector genotype, int gamploidy){
  int ploidy = genotype.size();
  int ngametes = Rf_choose(ploidy, gamploidy);
  IntegerMatrix out(ngametes, gamploidy);
  IntegerMatrix subout;
  int row = 0;
  
  if(gamploidy == 1){
    for(int i = 0; i < ngametes; i++){
      out(i, 0) = genotype(i);
    }
  } else {
    for(int i = 0; i < ploidy - gamploidy + 1; i++){
      subout = makeGametesRecur(genotype[Range(i + 1, (ploidy - 1))], gamploidy - 1);
      for(int r = 0; r < subout.nrow(); r++){
        out(row, 0) = genotype(i);
        for(int c = 0; c < subout.ncol(); c++){
          out(row, c + 1) = subout(r, c);
        }
        row++;
      }
    }
  }
  
  return out;
}

// For a given genotype, return a matrix containing all possible gamete
// genotypes.  Duplicates will be output reflecting relative gamete frequency.
// Ploidy should be even.
// [[Rcpp::export]]
IntegerMatrix makeGametes(IntegerVector genotype){
  int gamploidy = genotype.size() / 2;
  return makeGametesRecur(genotype, gamploidy);
}

// Generate a square matrix indicating the expected frequency of progeny
// genotypes produced by self-fertilization of any given genotype.
// Original genotypes are in rows and progeny frequencies are in columns.
// If f is a vector of genotype frequencies (arranged horizontally) and A is 
// the selfing matrix, then fA is the vector of genotype frequencies after one 
// generation of self fertilization.  Genotypes are in VCF order.
// [[Rcpp::export]]
NumericMatrix selfingMatrix(int ploidy, int nalleles){
  IntegerMatrix allgen = enumerateGenotypes(ploidy, nalleles);
  int ngen = allgen.nrow();
  int gamploidy = ploidy / 2;
  int ngametes = Rf_choose(ploidy, gamploidy);
  IntegerVector thisgen(ploidy); // genotype that is being selfed
  IntegerMatrix thesegametes(ngametes, gamploidy);
  IntegerVector gam1(gamploidy); // genotype of gamete 1
  IntegerVector gam2(gamploidy); // genotype of gamete 2
  IntegerVector proggen(ploidy); // genotype of selfed progeny
  int progindex; // genotype index for a selfed progeny
  double increment = 1. / ngametes / ngametes;
  NumericMatrix out(ngen, ngen);
  
  for(int i = 0; i < ngen; i++){
    thisgen = allgen(i, _ );
    thesegametes = makeGametes(thisgen);
    for(int g1 = 0; g1 < ngametes; g1++){
      gam1 = thesegametes(g1, _ );
      for(int g2 = 0; g2 < ngametes; g2++){
        gam2 = thesegametes(g2, _ );
        for(int j = 0; j < gamploidy; j++){
          proggen(j) = gam1(j);
          proggen(j + gamploidy) = gam2(j);
        }
        std::sort(proggen.begin(), proggen.end());
        progindex = indexGenotype(proggen);
        out(i, progindex) += increment;
      }
    }
  }
  
  return out;
}
