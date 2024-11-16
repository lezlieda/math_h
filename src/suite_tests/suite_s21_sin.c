#include "../suitecases.h"

START_TEST(s21_sin_1) {
  double x = -NAN;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

START_TEST(s21_sin_2) {
  double x = NAN;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

START_TEST(s21_sin_3) {
  double x = -INFINITY;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

START_TEST(s21_sin_4) {
  double x = INFINITY;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

START_TEST(s21_sin_5) {
  double x = -0.;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

START_TEST(s21_sin_6) {
  double x = 0.;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

START_TEST(s21_sin_7) {
  double x = 1.234567;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

START_TEST(s21_sin_8) {
  double x = -123.456789;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

START_TEST(s21_sin_9) {
  double x = 1.23e10;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

START_TEST(s21_sin_10) {
  double x = 2456245.081021;
  x *= !(rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", sin(x));
  char s21_sin_result[32];
  sprintf(s21_sin_result, "%.8Lf", s21_sin(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sin_result)),
                "\nsin(%lf) = %s, s21_sin(%lf) = %s", x, result, x,
                s21_sin_result);
}
END_TEST

Suite *suite_s21_sin() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sin");

  tc_core = tcase_create("case_s21_sin");

  tcase_add_test(tc_core, s21_sin_1);
  tcase_add_test(tc_core, s21_sin_2);
  tcase_add_test(tc_core, s21_sin_3);
  tcase_add_test(tc_core, s21_sin_4);
  tcase_add_test(tc_core, s21_sin_5);
  tcase_add_test(tc_core, s21_sin_6);
  tcase_add_test(tc_core, s21_sin_7);
  tcase_add_test(tc_core, s21_sin_8);
  tcase_add_test(tc_core, s21_sin_9);
  tcase_add_test(tc_core, s21_sin_10);

  suite_add_tcase(s, tc_core);

  return s;
}
