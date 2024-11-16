#include "../s21_math.h"

long double s21_acos(double x) {
  long double result = 0;
  if (s21_fabs(x) > 1.0) {
    result = s21_NAN;
  } else {
    result = s21_PI / 2 - s21_asin(x);
  }
  return result;
}