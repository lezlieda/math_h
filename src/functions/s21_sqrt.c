#include "../s21_math.h"

//  computes square root
long double s21_sqrt(double x) {
  long double r;
  if (x > 0. && !s21_is_inf(x)) {
    long double left = 0;
    long double right = x;
    long double middle;
    int n = 0;
    if (x < 1.) {
      right = 1;
    }
    middle = (left + right) / 2;
    while ((middle - left) > s21_EPS && n <= chains) {
      if (middle * middle > (long double)x) {
        right = middle;
      } else {
        left = middle;
      }
      middle = (left + right) / 2;
      n++;
    }
    r = middle;
  } else if (s21_fabs(x) == 0) {
    r = s21_subzero(x) ? -0. : 0;
  } else if (s21_is_inf(x) == 1) {
    r = s21_INFINITY;
  } else {
    r = s21_NAN;
  }
  return (r);
}
