#include <Rcpp.h>
using namespace Rcpp;


//' Add Two Numbers
//'
//' Return the sum of two numbers.
//' @param x double; the first number
//' @param y double; the second number
//' @export
// [[Rcpp::export]]
double add_cpp(double x, double y) {
  double value = x + y;
  return value;
}
