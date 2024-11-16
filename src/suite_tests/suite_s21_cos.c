#include "../suitecases.h"

START_TEST(s21_cos_1) {
  double x = -NAN;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_2) {
  double x = NAN;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_3) {
  double x = -INFINITY;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_4) {
  double x = INFINITY;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_5) {
  double x = -0.;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_6) {
  double x = 0.;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_7) {
  double x = 123.456;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_8) {
  double x = 919.191919;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_9) {
  double x = 1.23e-6;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_10) {
  double x = 4.598146e-10;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_11) {
  double x = 198929.191534;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_12) {
  double x = 2982982124.345046;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

START_TEST(s21_cos_13) {
  double x = -9123248520.199041;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", cos(x));
  char s21_cos_result[32];
  sprintf(s21_cos_result, "%.8Lf", s21_cos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_cos_result)),
                "\ncos(%lf) = %s, s21_cos(%lf) = %s", x, result, x,
                s21_cos_result);
}
END_TEST

Suite *suite_s21_cos() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_cos");

  tc_core = tcase_create("case_s21_cos");

  tcase_add_test(tc_core, s21_cos_1);
  tcase_add_test(tc_core, s21_cos_2);
  tcase_add_test(tc_core, s21_cos_3);
  tcase_add_test(tc_core, s21_cos_4);
  tcase_add_test(tc_core, s21_cos_5);
  tcase_add_test(tc_core, s21_cos_6);
  tcase_add_test(tc_core, s21_cos_7);
  tcase_add_test(tc_core, s21_cos_8);
  tcase_add_test(tc_core, s21_cos_9);
  tcase_add_test(tc_core, s21_cos_10);
  tcase_add_test(tc_core, s21_cos_11);
  tcase_add_test(tc_core, s21_cos_12);
  tcase_add_test(tc_core, s21_cos_13);

  suite_add_tcase(s, tc_core);

  return s;
}
