#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::interfaces(r, cpp)]]

//' Add Two Numbers
//'
//' Return the sum of two numbers.
//' @param x numeric; the first number
//' @param y numeric; the second number
//' @export
// [[Rcpp::export]]
double add_cpp(double x, double y) {
  double value = x + y;
  return value;
}
