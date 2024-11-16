#include "../s21_math.h"

//  remainder of the floating-point division operation
long double s21_fmod(double x, double y) {
  double result = 0;
  if (s21_is_nan(x)) {
    result = s21_NAN;
  } else if (s21_is_nan(y)) {
    result = s21_NAN;
  } else if (x == 0) {
    if (1 / y == -s21_INFINITY || 1 / y == s21_INFINITY) {
      result = s21_NAN;
    } else {
      result = x;
    }
  } else if (s21_is_inf(x)) {
    result = s21_NAN;
  } else if (s21_is_inf(y)) {
    result = x;
  } else if (y == 0) {
    result = s21_NAN;
  } else if (s21_fabs(y) < s21_EPS) {  // на мылых степенях сильно тупит
    result = 0;
  } else {
    int sign = 0;
    if (x < 0) sign = 1;
    double fx = s21_fabs(x);
    double fy = s21_fabs(y);
    int exp_x, exp_y;
    if (fx < fy) {
      result = x;
    } else {
      double dividend, divisor;
      dividend = fx;
      s21_frexp(fx, &exp_x);
      s21_frexp(fy, &exp_y);
      divisor = s21_ldexp(fy, exp_x - exp_y);
      if (divisor <= 0.5 * dividend) {
        divisor += divisor;
      }
      while (dividend >= fy) {
        if (dividend >= divisor) {
          dividend -= divisor;
        }
        divisor *= 0.5;
      }
      result = !sign ? dividend : -dividend;
    }
  }
  return result;
}
