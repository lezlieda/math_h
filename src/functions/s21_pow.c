#include "../s21_math.h"

long double s21_pow_int(long double base, long long int exp);
long double s21_pow_zero(long double base, long double exp);
long double s21_pow_one(long double exp);
long double s21_pow_inf(long double base, long double exp);
long double s21_pow_base(long double base, long double exp);

// raises a number to the given power
long double s21_pow(double base, double exp) {
  long double r = 1;

  if (s21_fabs(exp) > s21_LLONG_MAX) {
    if (exp > +s21_LLONG_MAX) {
      exp = +s21_INFINITY;
    } else {
      exp = -s21_INFINITY;
    }
  }

  // For exp ~0 OR => r = 1;
  if (s21_fabs(exp) == 0 || base == 1) {
    r = 1;
    // for args == NaN
  } else if (s21_is_nan(base) || s21_is_nan(exp)) {
    r = s21_NAN;
    // for base = +-1
  } else if (s21_fabs(base) == 1) {
    r = s21_pow_one(exp);
    // for base ~= 0
  } else if (s21_fabs(base) < s21_EPS) {
    r = s21_pow_zero(base, exp);
    // for base/exp == +-inf
  } else if (s21_is_inf(base) || s21_is_inf(exp)) {
    r = s21_pow_inf(base, exp);
  } else if ((base < s21_DBL_MIN && s21_is_inf(base) > -1) &&
             (exp - (long long int)exp != 0 && s21_is_inf(exp) == 0)) {
    r = s21_NAN;
  } else if (s21_fabs(exp) - s21_fabs((long long int)exp) < 1e-9) {
    r = s21_pow_int(base, (long long int)exp);
  } else if (exp > 0) {
    r = s21_exp(s21_log(base) * exp);
  } else {
    r = 1 / s21_pow(base, -exp);
  }
  return (r);
}

long double s21_pow_int(long double base, long long int exp) {
  long double result = 1;
  if (exp >= 0) {
    for (long long int i = exp; (i > 0 && s21_is_inf(result) == 0); i--) {
      result *= base;
    }
  } else {
    result = 1 / s21_pow_int(base, -exp);
  }
  return result;
}

// for base ~=0
long double s21_pow_zero(long double base, long double exp) {
  long double r;
  if (s21_fabs(exp) - s21_fabs((long long int)exp) < 1e-9) {
    r = s21_pow_int(base, (long long int)exp);
  } else if (exp > 0) {
    r = s21_exp(s21_log(base) * exp);
  } else {
    r = 1 / s21_pow(base, -exp);
  }
  return r;
}

// for base -1
long double s21_pow_one(long double exp) {
  long double r;
  if (exp - (long int)exp != 0 && s21_is_inf(exp) == 0) {
    r = s21_NAN;
  } else if (s21_is_inf(exp) != 0) {
    r = 1;
  } else {
    r = 1;
    if (s21_fmod(exp, 2) != 0) {
      r = -r;
    }
  }
  return r;
}

// for base =+-inf
long double s21_pow_inf(long double base, long double exp) {
  long double r = s21_NAN;
  // For exp == +inf
  if (s21_is_inf(exp) > 0) {
    if (s21_fabs(base) < 1) {
      r = +0.;
    } else {
      r = +s21_INFINITY;  // exp > 1
    }
    // For exp == -inf
  } else if (s21_is_inf(exp) < 0) {
    if (s21_fabs(base) < 1) {
      r = +s21_INFINITY;
    } else {
      r = +0.;  // exp > 1
    }
    // For base == +inf
  } else if (s21_is_inf(base) > 0) {
    r = (exp < 0.) ? 0. : s21_INFINITY;
    // For base == -inf
  } else if (exp < 0) {
    if (s21_is_inf(exp) > -1 &&           // exp is not -inf
        s21_fmod(exp, 2) != 0 &&          // exp is odd
        exp - (long long int)exp == 0) {  // exp is int
      r = -0.;
    } else {
      r = 0;  // negative non-integer or even integer
    }
  } else if (exp > s21_DBL_MIN) {
    if (s21_is_inf(exp) < 1 &&            // exp is not inf
        s21_fmod(exp, 2) != 0 &&          // exp is odd
        exp - (long long int)exp == 0) {  // integer
      r = -s21_INFINITY;
    } else {
      r = +s21_INFINITY;  // positive non-integer or even integer
    }
  }
  return r;
}

// long double s21_pre_pow(double base, double exp) {
//   long double result = -1.23;  // обработка ^0, NAN и INF, а также int_pow
//   if (s21_fabs(exp) < 1e-9) {
//     result = 1;
//   } else if (base != base) {
//     result = base;
//     if (!s21_fmod(exp + 1., 2.)) result = s21_NAN;
//   } else if (exp != exp) {
//     result = (s21_fabs(base - 1.) < 1e-9) ? 1 : exp;
//   } else if (s21_is_inf(exp)) {
//     if (s21_fabs(base) < 1) {
//       result = (s21_is_inf(exp) > 0) ? 0 : s21_INFINITY;
//     } else if (s21_fabs(base) > 1) {
//       result = (s21_is_inf(exp) < 0) ? 0 : s21_INFINITY;
//     } else {
//       result = 1;
//     }
//   } else if (s21_is_inf(base)) {
//     result = (exp > 0) ? s21_INFINITY : 0;
//     if (s21_is_inf(base) < 0) {
//       result *= (!s21_fmod(exp + 1., 2)) ? -1 : 1;
//     }
//   } else if (base < 0 && s21_fabs(exp - (long long)exp) > 1e-9) {
//     result = -s21_NAN;
//   } else if (s21_fabs(exp) - s21_fabs((long long int)exp) < 1e-9) {
//     result = -66.6;
//   }
//   return result;
// }
//
// long double s21_pow_int(long double base, long long int exp) {
//   long double result = 1;
//   if (exp >= 0) {
//     for (long long int i = exp; i > 0; i--) {
//       result *= base;
//     }
//   } else {
//     result = 1 / s21_pow_int(base, -exp);
//   }
//   return result;
// }
//
// long double s21_pow(double base, double exp) {
//   long double result = 0;
//   if (s21_pre_pow(base, exp) != -1.23 && s21_pre_pow(base, exp) != -66.6) {
//     result = s21_pre_pow(base, exp);
//   } else if (s21_pre_pow(base, exp) == -66.6) {
//     result = s21_pow_int(base, (long long int)exp);
//   } else if (exp > 0) {
//     result = s21_exp(s21_log(base) * exp);
//   } else {
//     result = 1 / s21_pow(base, -exp);
//   }
//   return result;
// }

// remarks here:
// https://learn.microsoft.com/en-us/dotnet/api/system.math.pow?redirectedfrom=
// MSDN&view=net-7.0#System_Math_Pow_System_Double_System_Double_