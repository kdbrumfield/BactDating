// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// coalpriorC
double coalpriorC(NumericVector leaves, NumericVector intnodes, double neg);
RcppExport SEXP _CreDating_coalpriorC(SEXP leavesSEXP, SEXP intnodesSEXP, SEXP negSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type leaves(leavesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intnodes(intnodesSEXP);
    Rcpp::traits::input_parameter< double >::type neg(negSEXP);
    rcpp_result_gen = Rcpp::wrap(coalpriorC(leaves, intnodes, neg));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodGammaC
double likelihoodGammaC(NumericMatrix tab, double rate);
RcppExport SEXP _CreDating_likelihoodGammaC(SEXP tabSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type tab(tabSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodGammaC(tab, rate));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodPoissonC
double likelihoodPoissonC(NumericMatrix tab, double rate);
RcppExport SEXP _CreDating_likelihoodPoissonC(SEXP tabSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type tab(tabSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodPoissonC(tab, rate));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CreDating_coalpriorC", (DL_FUNC) &_CreDating_coalpriorC, 3},
    {"_CreDating_likelihoodGammaC", (DL_FUNC) &_CreDating_likelihoodGammaC, 2},
    {"_CreDating_likelihoodPoissonC", (DL_FUNC) &_CreDating_likelihoodPoissonC, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_CreDating(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}