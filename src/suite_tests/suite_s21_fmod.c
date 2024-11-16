#include "../suitecases.h"

START_TEST(s21_frexp_1) {
  double x[] = {-NAN,      NAN,       -INFINITY, INFINITY, -0.,        0.,
                1.23e-303, 1.23e+303, 1.23,      0.116516, -191.198116};
  int exp = 0;
  int s21_exp_res = 0;
  char result[128];
  char s21_frexp_result[128];
  for (int i = 0; i < 11; i++) {
    sprintf(result, "%.8lf", frexp(x[i], &exp));
    sprintf(s21_frexp_result, "%.8lf", s21_frexp(x[i], &s21_exp_res));
    ck_assert_msg(!strcmp(cut_(result), cut_(s21_frexp_result)),
                  "\nfrexp(%lf) = %s, s21_frexp(%lf) = %s", x[i], result, x[i],
                  s21_frexp_result);
    ck_assert_msg(exp == s21_exp_res, "\nexp = %d, s21_exp_res = %d", exp,
                  s21_exp_res);
  }
}
END_TEST

START_TEST(s21_fmod_1) {
  double x[] = {-NAN,     NAN,      -INFINITY, INFINITY, -0.,        0.,
                1.23e-33, 1.23e+33, 1.23,      0.116516, -191.198116};
  double y[] = {-NAN,    NAN,      -INFINITY, INFINITY, -0.,        0.,
                1.23e-3, 1.23e+33, 1.23,      0.116516, -191.198116};
  char result[128];
  char s21_fmod_result[128];
  for (int i = 0; i < 11; i++) {
    for (int j = 0; j < 11; j++) {
      sprintf(result, "%.8lf", fmod(x[i], y[j]));
      sprintf(s21_fmod_result, "%.8Lf", s21_fmod(x[i], y[j]));
      ck_assert_msg(!strcmp(cut_(result), cut_(s21_fmod_result)),
                    "\nfmod(%lf, %lf) = %s, s21_fmod(%lf, %lf) = %s", x[i],
                    y[j], result, x[i], y[j], s21_fmod_result);
    }
  }
}
END_TEST

START_TEST(s21_ldexp_1) {
  double x[] = {-NAN,    NAN,  -INFINITY, INFINITY,    -0.,        0.,
                123.456, 33.3, 1.23e-11,  0.116516e42, -191.198116};
  int exp[] = {-11, 0, 10};
  char result[128];
  char s21_ldexp_result[128];
  for (int i = 0; i < 11; i++) {
    for (int j = 0; j < 3; j++) {
      sprintf(result, "%.8lf", ldexp(x[i], exp[j]));
      sprintf(s21_ldexp_result, "%.8lf", s21_ldexp(x[i], exp[j]));
      ck_assert_msg(!strcmp(cut_(result), cut_(s21_ldexp_result)),
                    "\nldexp(%lf, %d) = %s, s21_ldexp(%lf, %d) = %s", x[i],
                    exp[j], result, x[i], exp[j], s21_ldexp_result);
    }
  }
}
END_TEST

Suite *suite_s21_fmod() {
  Suite *s = suite_create("s21_fmod");  // Инициализация Suite
  TCase *tc_case = tcase_create("case_s21_fmod");  // Инициализация TCase

  tcase_add_test(tc_case, s21_frexp_1);
  tcase_add_test(tc_case, s21_ldexp_1);
  tcase_add_test(tc_case, s21_fmod_1);

  suite_add_tcase(s, tc_case);  // Добавление TCase в Suite

  return s;
}
