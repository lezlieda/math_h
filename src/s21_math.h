#ifndef S21_MATH_H
#define S21_MATH_H

#include <stdint.h>
#include <stdio.h>

#define s21_PI 3.14159265358979323846264338327950288419716939937510
#define s21_E 2.71828182845904523536028747135266249775724709369995
// #define s21_NAN (__builtin_nanf(""))
// #define s21_INFINITY (__builtin_huge_val())
#define chains 1000
#define s21_LLONG_MAX 9223372036854775807

#define EPS 1e-12
#define s21_NAN 0.0 / 0.0
#define s21_INFINITY 1.0 / 0.0

#define s21_PIl 3.141592653589793238462643383279502884L
#define s21_PI_2l 1.570796326794896619231321691639751442L
#define s21_DBL_MIN 2.2250738585072014e-308L

#define s21_EPS 1e-9

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

char *cut_(char *str);
int s21_is_inf(long double x);
int s21_is_nan(long double x);
int s21_subzero(long double x);
double s21_modf(double x, double *iptr);
double s21_frexp(double x, int *exp);
double s21_ldexp(double x, int exp);
long double s21_pow_int(long double base, long long int exp);

#endif  // S21_MATH_H
