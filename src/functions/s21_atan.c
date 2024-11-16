#include "../s21_math.h"

long double s21_atan(double x) {
  long double result = 0;
  if (x < 0) {
    result = -s21_atan(-x);
  } else if (x > 1) {
    result = s21_PI / 2 - s21_atan(1 / x);
  } else {
    double x2 = x * x;
    long double term = 1;
    for (unsigned int i = chains; i > 0; --i) {
      term = (i * 2 - 1) + i * i * x2 / term;
    }
    result = x / term;
  }
  return result;
}