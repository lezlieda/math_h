#include "../suitecases.h"

START_TEST(s21_pow_1) {
  double x[] = {-NAN, NAN,      -INFINITY, INFINITY, -0.,
                0.,   1.0,      -1.0,      1.23e-3,  161.101,
                1.23, 0.116516, -2.3,      -131.21,  -s21_PI};
  double y[] = {-NAN, NAN, -INFINITY, INFINITY, -0.,  0.,      1.0,    -1.0,
                -3.,  1.2, 4.,        0.116516, -1.2, -131.21, -s21_PI};
  char result[128];
  char s21_pow_result[128];
  for (int i = 0; i < 14; i++) {
    for (int j = 0; j < 13; j++) {
      sprintf(result, "%.8lf", pow(x[i], y[j]));
      sprintf(s21_pow_result, "%.8Lf", s21_pow(x[i], y[j]));
      ck_assert_msg(!strcmp(cut_(result), cut_(s21_pow_result)),
                    "\npow(%lf, %lf) = %s, s21_pow(%lf, %lf) = %s", x[i], y[j],
                    result, x[i], y[j], s21_pow_result);
    }
  }
}
END_TEST

Suite *suite_s21_pow() {
  Suite *s = suite_create("s21_pow");  // Инициализация Suite
  TCase *tc_case = tcase_create("case_s21_pow");  // Инициализация TCase
  tcase_add_test(tc_case, s21_pow_1);
  suite_add_tcase(s, tc_case);  // Добавление TCase в Suite
  return s;
}
