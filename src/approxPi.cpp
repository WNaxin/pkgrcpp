#include <Rcpp.h>
#include <dqrng.h>
using namespace Rcpp;
using namespace dqrng;
// [[Rcpp::interfaces(r, cpp)]]


//' Pi approximation
 //'
 //' Return the estimated value for pi
 //' @param N numeric
 //' @export
 // [[Rcpp::export]]
 double approxPi(const int N) {
   NumericVector x = dqrunif(N);
   NumericVector y = dqrunif(N);
   NumericVector d = sqrt(x*x + y*y);
   return 4.0 * sum(d < 1.0) / N;
 }
