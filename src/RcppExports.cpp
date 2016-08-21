// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// generalized_correlation_sum
NumericMatrix generalized_correlation_sum(const NumericVector& timeSeries, int timeLag, int theilerWindow, NumericVector& radii, int minEmbeddingDim, int maxEmbeddingDim, int corrSumOrder, int numberBoxes);
RcppExport SEXP nonlinearTseries_generalized_correlation_sum(SEXP timeSeriesSEXP, SEXP timeLagSEXP, SEXP theilerWindowSEXP, SEXP radiiSEXP, SEXP minEmbeddingDimSEXP, SEXP maxEmbeddingDimSEXP, SEXP corrSumOrderSEXP, SEXP numberBoxesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type timeSeries(timeSeriesSEXP);
    Rcpp::traits::input_parameter< int >::type timeLag(timeLagSEXP);
    Rcpp::traits::input_parameter< int >::type theilerWindow(theilerWindowSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type radii(radiiSEXP);
    Rcpp::traits::input_parameter< int >::type minEmbeddingDim(minEmbeddingDimSEXP);
    Rcpp::traits::input_parameter< int >::type maxEmbeddingDim(maxEmbeddingDimSEXP);
    Rcpp::traits::input_parameter< int >::type corrSumOrder(corrSumOrderSEXP);
    Rcpp::traits::input_parameter< int >::type numberBoxes(numberBoxesSEXP);
    __result = Rcpp::wrap(generalized_correlation_sum(timeSeries, timeLag, theilerWindow, radii, minEmbeddingDim, maxEmbeddingDim, corrSumOrder, numberBoxes));
    return __result;
END_RCPP
}
// calculate_fluctuation_function
NumericVector calculate_fluctuation_function(NumericVector& yr, NumericVector& windowSizesVector);
RcppExport SEXP nonlinearTseries_calculate_fluctuation_function(SEXP yrSEXP, SEXP windowSizesVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector& >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type windowSizesVector(windowSizesVectorSEXP);
    __result = Rcpp::wrap(calculate_fluctuation_function(yr, windowSizesVector));
    return __result;
END_RCPP
}
// rcpp_information_dimension
NumericMatrix rcpp_information_dimension(const NumericVector& timeSeries, const IntegerVector& embeddingDimensions, int timeLag, const NumericVector& fixedMasses, double radius, double increasingRadiusFactor, int nBoxes, int nReferenceVectors, int theilerWindow, int nNeighbours);
RcppExport SEXP nonlinearTseries_rcpp_information_dimension(SEXP timeSeriesSEXP, SEXP embeddingDimensionsSEXP, SEXP timeLagSEXP, SEXP fixedMassesSEXP, SEXP radiusSEXP, SEXP increasingRadiusFactorSEXP, SEXP nBoxesSEXP, SEXP nReferenceVectorsSEXP, SEXP theilerWindowSEXP, SEXP nNeighboursSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type timeSeries(timeSeriesSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type embeddingDimensions(embeddingDimensionsSEXP);
    Rcpp::traits::input_parameter< int >::type timeLag(timeLagSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type fixedMasses(fixedMassesSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< double >::type increasingRadiusFactor(increasingRadiusFactorSEXP);
    Rcpp::traits::input_parameter< int >::type nBoxes(nBoxesSEXP);
    Rcpp::traits::input_parameter< int >::type nReferenceVectors(nReferenceVectorsSEXP);
    Rcpp::traits::input_parameter< int >::type theilerWindow(theilerWindowSEXP);
    Rcpp::traits::input_parameter< int >::type nNeighbours(nNeighboursSEXP);
    __result = Rcpp::wrap(rcpp_information_dimension(timeSeries, embeddingDimensions, timeLag, fixedMasses, radius, increasingRadiusFactor, nBoxes, nReferenceVectors, theilerWindow, nNeighbours));
    return __result;
END_RCPP
}
// lyapunov_exponent
NumericMatrix lyapunov_exponent(const NumericVector& timeSeries, int minEmbeddingDim, int maxEmbeddingDim, int timeLag, double radius, int theilerWindow, int minNumNeighbours, int nRefPoints, int maxTimeSteps, int nBoxes);
RcppExport SEXP nonlinearTseries_lyapunov_exponent(SEXP timeSeriesSEXP, SEXP minEmbeddingDimSEXP, SEXP maxEmbeddingDimSEXP, SEXP timeLagSEXP, SEXP radiusSEXP, SEXP theilerWindowSEXP, SEXP minNumNeighboursSEXP, SEXP nRefPointsSEXP, SEXP maxTimeStepsSEXP, SEXP nBoxesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type timeSeries(timeSeriesSEXP);
    Rcpp::traits::input_parameter< int >::type minEmbeddingDim(minEmbeddingDimSEXP);
    Rcpp::traits::input_parameter< int >::type maxEmbeddingDim(maxEmbeddingDimSEXP);
    Rcpp::traits::input_parameter< int >::type timeLag(timeLagSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type theilerWindow(theilerWindowSEXP);
    Rcpp::traits::input_parameter< int >::type minNumNeighbours(minNumNeighboursSEXP);
    Rcpp::traits::input_parameter< int >::type nRefPoints(nRefPointsSEXP);
    Rcpp::traits::input_parameter< int >::type maxTimeSteps(maxTimeStepsSEXP);
    Rcpp::traits::input_parameter< int >::type nBoxes(nBoxesSEXP);
    __result = Rcpp::wrap(lyapunov_exponent(timeSeries, minEmbeddingDim, maxEmbeddingDim, timeLag, radius, theilerWindow, minNumNeighbours, nRefPoints, maxTimeSteps, nBoxes));
    return __result;
END_RCPP
}
// tsHistogram
NumericMatrix tsHistogram(const NumericVector& x, const int& tlag, const int& npartitions);
RcppExport SEXP nonlinearTseries_tsHistogram(SEXP xSEXP, SEXP tlagSEXP, SEXP npartitionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type tlag(tlagSEXP);
    Rcpp::traits::input_parameter< const int& >::type npartitions(npartitionsSEXP);
    __result = Rcpp::wrap(tsHistogram(x, tlag, npartitions));
    return __result;
END_RCPP
}
// mutualInformation
NumericVector mutualInformation(const NumericVector& tseries, const int& maxlag, const int& npartitions);
RcppExport SEXP nonlinearTseries_mutualInformation(SEXP tseriesSEXP, SEXP maxlagSEXP, SEXP npartitionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxlag(maxlagSEXP);
    Rcpp::traits::input_parameter< const int& >::type npartitions(npartitionsSEXP);
    __result = Rcpp::wrap(mutualInformation(tseries, maxlag, npartitions));
    return __result;
END_RCPP
}
// getVectorNeighbours
IntegerVector getVectorNeighbours(const NumericMatrix& phaseSpace, int vectorIndex, double radius, int numberBoxes);
RcppExport SEXP nonlinearTseries_getVectorNeighbours(SEXP phaseSpaceSEXP, SEXP vectorIndexSEXP, SEXP radiusSEXP, SEXP numberBoxesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type phaseSpace(phaseSpaceSEXP);
    Rcpp::traits::input_parameter< int >::type vectorIndex(vectorIndexSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type numberBoxes(numberBoxesSEXP);
    __result = Rcpp::wrap(getVectorNeighbours(phaseSpace, vectorIndex, radius, numberBoxes));
    return __result;
END_RCPP
}
// getAllNeighbours
List getAllNeighbours(const NumericMatrix& phaseSpace, double radius, int numberBoxes);
RcppExport SEXP nonlinearTseries_getAllNeighbours(SEXP phaseSpaceSEXP, SEXP radiusSEXP, SEXP numberBoxesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type phaseSpace(phaseSpaceSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type numberBoxes(numberBoxesSEXP);
    __result = Rcpp::wrap(getAllNeighbours(phaseSpace, radius, numberBoxes));
    return __result;
END_RCPP
}
// test
NumericMatrix test(NumericMatrix& x, NumericVector y);
RcppExport SEXP nonlinearTseries_test(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    __result = Rcpp::wrap(test(x, y));
    return __result;
END_RCPP
}
// neighsList2Sparse
void neighsList2Sparse(List& neighs, NumericMatrix& neighs_matrix);
RcppExport SEXP nonlinearTseries_neighsList2Sparse(SEXP neighsSEXP, SEXP neighs_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List& >::type neighs(neighsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type neighs_matrix(neighs_matrixSEXP);
    neighsList2Sparse(neighs, neighs_matrix);
    return R_NilValue;
END_RCPP
}
// neighsList2SparseRCreator
void neighsList2SparseRCreator(const List& neighs, const int& ntakens, NumericMatrix& neighs_matrix);
RcppExport SEXP nonlinearTseries_neighsList2SparseRCreator(SEXP neighsSEXP, SEXP ntakensSEXP, SEXP neighs_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type neighs(neighsSEXP);
    Rcpp::traits::input_parameter< const int& >::type ntakens(ntakensSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type neighs_matrix(neighs_matrixSEXP);
    neighsList2SparseRCreator(neighs, ntakens, neighs_matrix);
    return R_NilValue;
END_RCPP
}
