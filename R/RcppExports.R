# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

dmultinom <- function(x, prob) {
    .Call('_ploidyverseVcf_dmultinom', PACKAGE = 'ploidyverseVcf', x, prob)
}

dDirichletMultinom <- function(x, prob, alpha) {
    .Call('_ploidyverseVcf_dDirichletMultinom', PACKAGE = 'ploidyverseVcf', x, prob, alpha)
}

nGen <- function(ploidy, nalleles) {
    .Call('_ploidyverseVcf_nGen', PACKAGE = 'ploidyverseVcf', ploidy, nalleles)
}

enumerateGenotypes <- function(ploidy, nalleles) {
    .Call('_ploidyverseVcf_enumerateGenotypes', PACKAGE = 'ploidyverseVcf', ploidy, nalleles)
}

indexGenotype <- function(genotype) {
    .Call('_ploidyverseVcf_indexGenotype', PACKAGE = 'ploidyverseVcf', genotype)
}

genotypeFromIndex <- function(index, ploidy) {
    .Call('_ploidyverseVcf_genotypeFromIndex', PACKAGE = 'ploidyverseVcf', index, ploidy)
}

alleleCopy <- function(genotype, nalleles) {
    .Call('_ploidyverseVcf_alleleCopy', PACKAGE = 'ploidyverseVcf', genotype, nalleles)
}

makeGametes <- function(genotype) {
    .Call('_ploidyverseVcf_makeGametes', PACKAGE = 'ploidyverseVcf', genotype)
}

selfingMatrix <- function(ploidy, nalleles) {
    .Call('_ploidyverseVcf_selfingMatrix', PACKAGE = 'ploidyverseVcf', ploidy, nalleles)
}

# Register entry points for exported C++ functions
methods::setLoadAction(function(ns) {
    .Call('_ploidyverseVcf_RcppExport_registerCCallable', PACKAGE = 'ploidyverseVcf')
})
