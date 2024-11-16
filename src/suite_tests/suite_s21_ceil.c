#include "../suitecases.h"

START_TEST(s21_ceil_1) {
  double x = -NAN;
  char result[128];
  sprintf(result, "%.10lf", ceil(x));
  char s21_ceil_result[128];
  sprintf(s21_ceil_result, "%.10Lf", s21_ceil(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_ceil_result)),
                "\nceil(%lf) = %s, s21_ceil(%lf) = %s", x, result, x,
                s21_ceil_result);
}
END_TEST

START_TEST(s21_ceil_2) {
  double x = NAN;
  char result[128];
  sprintf(result, "%.10lf", ceil(x));
  char s21_ceil_result[128];
  sprintf(s21_ceil_result, "%.10Lf", s21_ceil(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_ceil_result)),
                "\nceil(%lf) = %s, s21_ceil(%lf) = %s", x, result, x,
                s21_ceil_result);
}
END_TEST

START_TEST(s21_ceil_3) {
  double x = -INFINITY;
  ck_assert_ldouble_infinite(s21_ceil(x));
}
END_TEST

START_TEST(s21_ceil_4) {
  double x = INFINITY;
  ck_assert_ldouble_infinite(s21_ceil(x));
}
END_TEST

START_TEST(s21_ceil_5) {
  double x = -0.;
  char result[128];
  sprintf(result, "%.10lf", ceil(x));
  char s21_ceil_result[128];
  sprintf(s21_ceil_result, "%.10Lf", s21_ceil(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_ceil_result)),
                "\nceil(%lf) = %s, s21_ceil(%lf) = %s", x, result, x,
                s21_ceil_result);
}
END_TEST

START_TEST(s21_ceil_6) {
  double x = 0.;
  char result[128];
  sprintf(result, "%.10lf", ceil(x));
  char s21_ceil_result[128];
  sprintf(s21_ceil_result, "%.10Lf", s21_ceil(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_ceil_result)),
                "\nceil(%lf) = %s, s21_ceil(%lf) = %s", x, result, x,
                s21_ceil_result);
}
END_TEST

START_TEST(s21_ceil_7) {
  double x = 981951298292.123;
  char result[128];
  sprintf(result, "%.10lf", ceil(x));
  char s21_ceil_result[128];
  sprintf(s21_ceil_result, "%.10Lf", s21_ceil(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_ceil_result)),
                "\nceil(%lf) = %s, s21_ceil(%lf) = %s", x, result, x,
                s21_ceil_result);
}
END_TEST

START_TEST(s21_ceil_8) {
  double x = -981951298292.91;
  char result[128];
  sprintf(result, "%.10lf", ceil(x));
  char s21_ceil_result[128];
  sprintf(s21_ceil_result, "%.10Lf", s21_ceil(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_ceil_result)),
                "\nceil(%lf) = %s, s21_ceil(%lf) = %s", x, result, x,
                s21_ceil_result);
}
END_TEST

START_TEST(s21_ceil_9) {
  double x = 123000000000.3;
  char result[128];
  sprintf(result, "%.10lf", ceil(x));
  char s21_ceil_result[128];
  sprintf(s21_ceil_result, "%.10Lf", s21_ceil(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_ceil_result)),
                "\nceil(%lf) = %s, s21_ceil(%lf) = %s", x, result, x,
                s21_ceil_result);
}
END_TEST

START_TEST(s21_ceil_10) {
  double x = -63425346.0;
  char result[128];
  sprintf(result, "%.10lf", ceil(x));
  char s21_ceil_result[128];
  sprintf(s21_ceil_result, "%.10Lf", s21_ceil(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_ceil_result)),
                "\nceil(%lf) = %s, s21_ceil(%lf) = %s", x, result, x,
                s21_ceil_result);
}
END_TEST

Suite *suite_s21_ceil() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_ceil");

  tc_core = tcase_create("case_s21_ceil");
  tcase_add_test(tc_core, s21_ceil_1);
  tcase_add_test(tc_core, s21_ceil_2);
  tcase_add_test(tc_core, s21_ceil_3);
  tcase_add_test(tc_core, s21_ceil_4);
  tcase_add_test(tc_core, s21_ceil_5);
  tcase_add_test(tc_core, s21_ceil_6);
  tcase_add_test(tc_core, s21_ceil_7);
  tcase_add_test(tc_core, s21_ceil_8);
  tcase_add_test(tc_core, s21_ceil_9);
  tcase_add_test(tc_core, s21_ceil_10);

  suite_add_tcase(s, tc_core);

  return s;
}