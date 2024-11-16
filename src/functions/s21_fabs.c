#include "../s21_math.h"

double s21_fabs(double x) {
  double result = x;
  if (s21_is_nan(x)) {
    result = s21_NAN;
  } else if (s21_is_inf(x)) {
    result = s21_INFINITY;
  } else if (x == 0) {
    result = 0;
  } else if (x < 0) {
    result = -x;
  }
  return result;
}
