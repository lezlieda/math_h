#include "../s21_math.h"

long double s21_tan(double x) {
  long double r = 0;
  long double x_mod = s21_fmod(x, s21_PIl);
  if (x_mod > (s21_PI_2l - s21_EPS * 1e-6) &&
      x_mod < (s21_PI_2l + s21_EPS * 1e-6)) {
    r = 16331239353195370L;
  } else if (x_mod < -(s21_PI_2l - s21_EPS * 1e-6) &&
             x_mod > -(s21_PI_2l + s21_EPS * 1e-6)) {
    r = -16331239353195370L;
  } else {
    r = s21_sin(x) / s21_cos(x);
  }
  return (r);
}