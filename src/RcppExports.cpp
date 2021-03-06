// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ploidyverseVcf.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// dmultinom
double dmultinom(NumericVector x, NumericVector prob);
static SEXP _ploidyverseVcf_dmultinom_try(SEXP xSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(dmultinom(x, prob));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ploidyverseVcf_dmultinom(SEXP xSEXP, SEXP probSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ploidyverseVcf_dmultinom_try(xSEXP, probSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// dDirichletMultinom
double dDirichletMultinom(NumericVector x, NumericVector prob, double alpha);
static SEXP _ploidyverseVcf_dDirichletMultinom_try(SEXP xSEXP, SEXP probSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(dDirichletMultinom(x, prob, alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ploidyverseVcf_dDirichletMultinom(SEXP xSEXP, SEXP probSEXP, SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ploidyverseVcf_dDirichletMultinom_try(xSEXP, probSEXP, alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// nGen
int nGen(int ploidy, int nalleles);
static SEXP _ploidyverseVcf_nGen_try(SEXP ploidySEXP, SEXP nallelesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< int >::type nalleles(nallelesSEXP);
    rcpp_result_gen = Rcpp::wrap(nGen(ploidy, nalleles));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ploidyverseVcf_nGen(SEXP ploidySEXP, SEXP nallelesSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ploidyverseVcf_nGen_try(ploidySEXP, nallelesSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// enumerateGenotypes
IntegerMatrix enumerateGenotypes(int ploidy, int nalleles);
static SEXP _ploidyverseVcf_enumerateGenotypes_try(SEXP ploidySEXP, SEXP nallelesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< int >::type nalleles(nallelesSEXP);
    rcpp_result_gen = Rcpp::wrap(enumerateGenotypes(ploidy, nalleles));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ploidyverseVcf_enumerateGenotypes(SEXP ploidySEXP, SEXP nallelesSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ploidyverseVcf_enumerateGenotypes_try(ploidySEXP, nallelesSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// indexGenotype
int indexGenotype(IntegerVector genotype);
static SEXP _ploidyverseVcf_indexGenotype_try(SEXP genotypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type genotype(genotypeSEXP);
    rcpp_result_gen = Rcpp::wrap(indexGenotype(genotype));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ploidyverseVcf_indexGenotype(SEXP genotypeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ploidyverseVcf_indexGenotype_try(genotypeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// genotypeFromIndex
IntegerVector genotypeFromIndex(int index, int ploidy);
static SEXP _ploidyverseVcf_genotypeFromIndex_try(SEXP indexSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    rcpp_result_gen = Rcpp::wrap(genotypeFromIndex(index, ploidy));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ploidyverseVcf_genotypeFromIndex(SEXP indexSEXP, SEXP ploidySEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ploidyverseVcf_genotypeFromIndex_try(indexSEXP, ploidySEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// alleleCopy
IntegerVector alleleCopy(IntegerVector genotype, int nalleles);
static SEXP _ploidyverseVcf_alleleCopy_try(SEXP genotypeSEXP, SEXP nallelesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type genotype(genotypeSEXP);
    Rcpp::traits::input_parameter< int >::type nalleles(nallelesSEXP);
    rcpp_result_gen = Rcpp::wrap(alleleCopy(genotype, nalleles));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ploidyverseVcf_alleleCopy(SEXP genotypeSEXP, SEXP nallelesSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ploidyverseVcf_alleleCopy_try(genotypeSEXP, nallelesSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// makeGametes
IntegerMatrix makeGametes(IntegerVector genotype);
static SEXP _ploidyverseVcf_makeGametes_try(SEXP genotypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type genotype(genotypeSEXP);
    rcpp_result_gen = Rcpp::wrap(makeGametes(genotype));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ploidyverseVcf_makeGametes(SEXP genotypeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ploidyverseVcf_makeGametes_try(genotypeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// selfingMatrix
NumericMatrix selfingMatrix(int ploidy, int nalleles);
static SEXP _ploidyverseVcf_selfingMatrix_try(SEXP ploidySEXP, SEXP nallelesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< int >::type nalleles(nallelesSEXP);
    rcpp_result_gen = Rcpp::wrap(selfingMatrix(ploidy, nalleles));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ploidyverseVcf_selfingMatrix(SEXP ploidySEXP, SEXP nallelesSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ploidyverseVcf_selfingMatrix_try(ploidySEXP, nallelesSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _ploidyverseVcf_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("double(*dmultinom)(NumericVector,NumericVector)");
        signatures.insert("double(*dDirichletMultinom)(NumericVector,NumericVector,double)");
        signatures.insert("int(*nGen)(int,int)");
        signatures.insert("IntegerMatrix(*enumerateGenotypes)(int,int)");
        signatures.insert("int(*indexGenotype)(IntegerVector)");
        signatures.insert("IntegerVector(*genotypeFromIndex)(int,int)");
        signatures.insert("IntegerVector(*alleleCopy)(IntegerVector,int)");
        signatures.insert("IntegerMatrix(*makeGametes)(IntegerVector)");
        signatures.insert("NumericMatrix(*selfingMatrix)(int,int)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _ploidyverseVcf_RcppExport_registerCCallable() { 
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_dmultinom", (DL_FUNC)_ploidyverseVcf_dmultinom_try);
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_dDirichletMultinom", (DL_FUNC)_ploidyverseVcf_dDirichletMultinom_try);
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_nGen", (DL_FUNC)_ploidyverseVcf_nGen_try);
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_enumerateGenotypes", (DL_FUNC)_ploidyverseVcf_enumerateGenotypes_try);
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_indexGenotype", (DL_FUNC)_ploidyverseVcf_indexGenotype_try);
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_genotypeFromIndex", (DL_FUNC)_ploidyverseVcf_genotypeFromIndex_try);
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_alleleCopy", (DL_FUNC)_ploidyverseVcf_alleleCopy_try);
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_makeGametes", (DL_FUNC)_ploidyverseVcf_makeGametes_try);
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_selfingMatrix", (DL_FUNC)_ploidyverseVcf_selfingMatrix_try);
    R_RegisterCCallable("ploidyverseVcf", "_ploidyverseVcf_RcppExport_validate", (DL_FUNC)_ploidyverseVcf_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_ploidyverseVcf_dmultinom", (DL_FUNC) &_ploidyverseVcf_dmultinom, 2},
    {"_ploidyverseVcf_dDirichletMultinom", (DL_FUNC) &_ploidyverseVcf_dDirichletMultinom, 3},
    {"_ploidyverseVcf_nGen", (DL_FUNC) &_ploidyverseVcf_nGen, 2},
    {"_ploidyverseVcf_enumerateGenotypes", (DL_FUNC) &_ploidyverseVcf_enumerateGenotypes, 2},
    {"_ploidyverseVcf_indexGenotype", (DL_FUNC) &_ploidyverseVcf_indexGenotype, 1},
    {"_ploidyverseVcf_genotypeFromIndex", (DL_FUNC) &_ploidyverseVcf_genotypeFromIndex, 2},
    {"_ploidyverseVcf_alleleCopy", (DL_FUNC) &_ploidyverseVcf_alleleCopy, 2},
    {"_ploidyverseVcf_makeGametes", (DL_FUNC) &_ploidyverseVcf_makeGametes, 1},
    {"_ploidyverseVcf_selfingMatrix", (DL_FUNC) &_ploidyverseVcf_selfingMatrix, 2},
    {"_ploidyverseVcf_RcppExport_registerCCallable", (DL_FUNC) &_ploidyverseVcf_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_ploidyverseVcf(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
