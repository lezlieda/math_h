#include "../s21_math.h"

long double s21_cos(double x) {
  int sign = 1;
  x = s21_fmod(s21_fabs(x), 2 * s21_PIl);  // [0, 2*pi]
  if (x < 3 * s21_PI_2l && x > s21_PI_2l) {
    sign *= -1;
  }
  if (x > s21_PIl) {  //  [0, pi]
    x -= s21_PIl;
  }
  if (x > s21_PI_2l) {  //  [0, pi/2]
    x = s21_PIl - x;
  }

  double t = 1, r = 1;
  for (int n = 2; (s21_fabs(t) > s21_EPS / 10 && n <= chains); n += 2) {
    t *= -x * x / (n * (n - 1));
    r += t;
  }
  r *= sign;
  return (r);
}
