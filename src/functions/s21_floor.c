#include "../s21_math.h"

long double s21_floor(double x) {
  long double result = 0;
  if (s21_is_nan(x) || s21_is_inf(x) || x == 0) {
    result = x;
  } else {
    double intpart = 0;
    double fractpart = 0;
    fractpart = s21_modf(x, &intpart);
    if (fractpart < 0) {
      result = intpart - 1;
    } else {
      result = intpart;
    }
  }
  return result;
}
