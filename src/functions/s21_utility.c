#include "../s21_math.h"

char *cut_(char *str) {
  char *p = str;
  while (*p != '\0') {
    p++;
    if (*p == '.') {
      p = p + 7;
      *p = '\0';
    }
  }
  return str;
}

double s21_frexp(double x, int *exp) {
  double result = 0;
  union {
    double d;
    uint_least64_t i;  // так как в double 64 бита: 1 бит знаковый, 11 бит
                       // экспонента, 52 бит мантисса
  } y = {x};  // инициализируем y.d = x и y.i = x в двоичном виде

  int e = (int)((y.i >> 52) &
                0x7ffL);  // сдвигаем на 52 бита вправо выключаем
                          // все биты кроме 11 бит экспоненты и записываем в e

  if (e == 0) {  // если экспонента равна 0
    if (x) {     // если мантисса не равна 0
      x = s21_frexp(x * 0x1p64, exp);  // умножаем на 2^64 и вызываем s21_frexp
      *exp -= 64;                      // уменьшаем exp на 64
    } else {
      *exp = 0;  // иначе exp = 0
    }
    result = x;             // возвращаем x
  } else if (e == 0x7ff) {  // если экспонента равна 0x7ff (2047)
    result = x;             // возвращаем x
    *exp = 0;               // exp = 0
  } else {
    *exp = e - 1022;  // иначе exp = e - 1022
    y.i &=
        0x800fffffffffffffL;  // выключаем все биты кроме знакового и мантиссы
    y.i |=
        0x3fe0000000000000L;  // включаем 1 бит в мантиссе и 11 бит в экспоненте
    result = y.d;  // возвращаем мантиссу с экспонентой 0
  }
  return result;
}

double s21_ldexp(double x, int exp) {
  double result = 0;
  if (x != x) {
    result = x;
  } else if (s21_is_inf(x)) {
    result = x;
  } else if (x == 0) {
    result = x;
  } else if (exp == 0) {
    result = x;
  } else if (exp > 0) {
    if (exp > 1023) {
      result = s21_INFINITY;
    } else {
      union {
        double d;
        uint_least64_t i;
      } y = {x};
      y.i += (uint_least64_t)exp << 52;
      result = y.d;
    }
  } else {
    if (exp < -1022) {
      result = 0;
    } else {
      union {
        double d;
        uint_least64_t i;
      } y = {x};
      y.i -= (uint_least64_t)-exp << 52;
      result = y.d;
    }
  }
  return result;
}

int s21_is_inf(long double x) {
  int result = 0;
  if (x == s21_INFINITY) {
    result = 1;
  } else if (x == -s21_INFINITY) {
    result = -1;
  }
  return result;
}

int s21_is_nan(long double x) {
  long double r;
  r = (x != x) ? 1 : 0;
  return (r);
}

double s21_modf(double x, double *iptr) {
  double result = 0;
  union {
    double d;
    uint_least64_t i;
  } u = {x};
  int e = (int)(u.i >> 52 & 0x7ff) - 0x3ff;  // получаем экспоненту
  if (e >= 52) {  // если экспонента больше 52 то число целое
    if (e == 0x400 && u.i << 12 != 0) {  // если экспонента равна 2047 и
                                         // мантисса не равна 0 то число NaN
      result = s21_NAN;
      *iptr = s21_NAN;
    } else {
      *iptr = x;
      u.i &= 1ULL << 63;  // если число не NaN то возвращаем его знак
      result = u.d;
    }
  } else if (e < 0) {  // если экспонента меньше 0 то число меньше 1
    u.i &= 1ULL << 63;  // возвращаем знак числа
    *iptr = u.d;
    result = x;
  } else {
    uint_least64_t mask = -1ULL >> 12 >> e;  // маска для получения мантиссы
    if ((u.i & mask) == 0) {  // если мантисса равна 0 то число целое
      *iptr = x;
      u.i &= 1ULL << 63;  // возвращаем знак числа
      result = u.d;
    } else {
      u.i &= ~mask;      // обнуляем мантиссу
      *iptr = u.d;       // возвращаем целую часть
      result = x - u.d;  // возвращаем дробную часть
    }
  }
  return result;
}

int s21_subzero(long double x) {
  int res = 0;
  if (1 / x == -s21_INFINITY) {
    res = 1;
  }
  return res;
}
