#include "../s21_math.h"

long double s21_sin(double x) {
  double r;
  if (x == 0) {
    r = s21_subzero(x) ? -0. : 0;
  } else {
    int sign = (x < 0.0) ? -1 : 1;
    x = s21_fmod(s21_fabs(x), 2 * s21_PIl);  // [0, 2*pi]
    if (x > s21_PIl) {                       //  [0, pi]
      x -= s21_PIl;
      sign *= -1;
    }
    if (x > s21_PI_2l) {  //  [0, pi/2]
      x = s21_PIl - x;
    }

    double t = x;
    r = x;
    for (unsigned int n = 3; (s21_fabs(t) > s21_EPS / 10 && n <= chains);
         n += 2) {
      t *= -x * x / (n * (n - 1));
      r += t;
    }
    r *= sign;
  }
  return (r);
}
