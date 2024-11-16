#include "../suitecases.h"

START_TEST(s21_exp_1) {
  double x = -NAN;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_2) {
  double x = NAN;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_3) {
  double x = -INFINITY;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_4) {
  double x = INFINITY;
  ck_assert_ldouble_infinite(s21_exp(x));
}
END_TEST

START_TEST(s21_exp_5) {
  double x = -0.;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_6) {
  double x = 0.;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_7) {
  double x = 0.981232;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_8) {
  double x = 2.295291;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_9) {
  double x = 6.292918;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_10) {
  double x = 11.911951;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_11) {
  double x = 44.191195;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_12) {
  double x = -0.981232;
  x *= -1;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_13) {
  double x = -3.295291;
  x *= -1;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_14) {
  double x = -7.127906;
  x *= -1;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_15) {
  double x = -10.912921;
  x *= -1;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

START_TEST(s21_exp_16) {
  double x = -23.137005;
  x *= -1;
  char result[64];
  sprintf(result, "%.8lf", exp(x));
  char s21_exp_result[64];
  sprintf(s21_exp_result, "%.8Lf", s21_exp(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_exp_result)),
                "\nexp(%lf) = %s, s21_exp(%lf) = %s", x, result, x,
                s21_exp_result);
}
END_TEST

Suite *suite_s21_exp() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_exp");

  tc_core = tcase_create("case_s21_exp");

  tcase_add_test(tc_core, s21_exp_1);
  tcase_add_test(tc_core, s21_exp_2);
  tcase_add_test(tc_core, s21_exp_3);
  tcase_add_test(tc_core, s21_exp_4);
  tcase_add_test(tc_core, s21_exp_5);
  tcase_add_test(tc_core, s21_exp_6);
  tcase_add_test(tc_core, s21_exp_7);
  tcase_add_test(tc_core, s21_exp_8);
  tcase_add_test(tc_core, s21_exp_9);
  tcase_add_test(tc_core, s21_exp_10);
  tcase_add_test(tc_core, s21_exp_11);
  tcase_add_test(tc_core, s21_exp_12);
  tcase_add_test(tc_core, s21_exp_13);
  tcase_add_test(tc_core, s21_exp_14);
  tcase_add_test(tc_core, s21_exp_15);
  tcase_add_test(tc_core, s21_exp_16);

  suite_add_tcase(s, tc_core);

  return s;
}
