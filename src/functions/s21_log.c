#include "../s21_math.h"

long double s21_log(double x) {
  long double result = 0;
  long double term = 1;
  int i = 1;
  long double fastResult = 0;
  if (s21_is_inf(x) == 1) {
    result = s21_INFINITY;
  } else if (s21_is_nan(x)) {
    result = s21_NAN;
  } else if (x < 0) {
    result = s21_NAN;
  } else if (s21_fabs(x) == 0) {
    result = -s21_INFINITY;
  } else if (x >= 1) {
    if (x > 1e3) {
      while (x > 1e3) {
        x /= 1e3;
        fastResult += s21_log(1e3);
      }
    }
    while (s21_fabs(term) > s21_EPS) {
      term *= (x - 1) / x;
      result += term / i;
      i++;
    }
  } else {
    result = -s21_log(1 / x);
  }
  return result + fastResult;
}
