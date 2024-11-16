#include "../s21_math.h"

long double s21_exp(double x) {
  long double result = 1;
  if (s21_is_nan(x)) {
    result = s21_NAN;
  } else {
    int flag = 0;
    if (x < 0) {
      flag = 1;
      x = -x;
    }
    for (int i = chains; i > 0; --i) {
      result = 1 + x * result / i;
    }
    result = s21_pow(result, 1);
    if (flag) result = 1 / result;
  }
  return result;
}
