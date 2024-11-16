#include "../suitecases.h"

START_TEST(s21_asin_1) {
  double x = -NAN;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_2) {
  double x = NAN;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_3) {
  double x = -INFINITY;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_4) {
  double x = INFINITY;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_5) {
  double x = -0.;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_6) {
  double x = 0.;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_7) {
  double x = -1.0;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_8) {
  double x = 1.0;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_9) {
  double x = 0.981915;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_10) {
  double x = -0.981915;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_11) {
  double x = 0.165345;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

START_TEST(s21_asin_12) {
  double x = -0.1982425;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", asin(x));
  char s21_asin_result[32];
  sprintf(s21_asin_result, "%.8Lf", s21_asin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_asin_result)),
                "\nasin(%lf) = %s, s21_asin(%lf) = %s", x, result, x,
                s21_asin_result);
}
END_TEST

Suite *suite_s21_asin() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_asin");

  tc_core = tcase_create("case_s21_asin");

  tcase_add_test(tc_core, s21_asin_1);
  tcase_add_test(tc_core, s21_asin_2);
  tcase_add_test(tc_core, s21_asin_3);
  tcase_add_test(tc_core, s21_asin_4);
  tcase_add_test(tc_core, s21_asin_5);
  tcase_add_test(tc_core, s21_asin_6);
  tcase_add_test(tc_core, s21_asin_7);
  tcase_add_test(tc_core, s21_asin_8);
  tcase_add_test(tc_core, s21_asin_9);
  tcase_add_test(tc_core, s21_asin_10);
  tcase_add_test(tc_core, s21_asin_11);
  tcase_add_test(tc_core, s21_asin_12);

  suite_add_tcase(s, tc_core);

  return s;
}
