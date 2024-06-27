#include <Rcpp.h>
using namespace Rcpp;

//' Sums a List of Numbers
//'
//' Return the sum of a list of numbers.
//' @param x numeric vector; a list of numbers to be summed
//' @export
// [[Rcpp::export]]
double sumC(NumericVector x) {
  int n = x.size();
  double total = 0;
  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total;
}
