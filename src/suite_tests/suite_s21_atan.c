#include "../suitecases.h"

START_TEST(s21_atan_1) {
  double x = -NAN;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

START_TEST(s21_atan_2) {
  double x = NAN;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

START_TEST(s21_atan_3) {
  double x = -INFINITY;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

START_TEST(s21_atan_4) {
  double x = INFINITY;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

START_TEST(s21_atan_5) {
  double x = -0.;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

START_TEST(s21_atan_6) {
  double x = 0.;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

START_TEST(s21_atan_7) {
  double x = 1.165156;
  x *= (rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

START_TEST(s21_atan_8) {
  double x = 1453452341324231.165156;
  x *= (rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

START_TEST(s21_atan_9) {
  double x = 0.299529;
  x *= (rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

START_TEST(s21_atan_10) {
  double x = -2763456357125433545.165156;
  x *= (rand() % 2) ? 1 : -1;
  char result[32];
  sprintf(result, "%.8lf", atan(x));
  char s21_atan_result[32];
  sprintf(s21_atan_result, "%.8Lf", s21_atan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_atan_result)),
                "\natan(%lf) = %s, s21_atan(%lf) = %s", x, result, x,
                s21_atan_result);
}
END_TEST

Suite *suite_s21_atan() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_atan");

  tc_core = tcase_create("case_s21_atan");

  tcase_add_test(tc_core, s21_atan_1);
  tcase_add_test(tc_core, s21_atan_2);
  tcase_add_test(tc_core, s21_atan_3);
  tcase_add_test(tc_core, s21_atan_4);
  tcase_add_test(tc_core, s21_atan_5);
  tcase_add_test(tc_core, s21_atan_6);
  tcase_add_test(tc_core, s21_atan_7);
  tcase_add_test(tc_core, s21_atan_8);
  tcase_add_test(tc_core, s21_atan_9);
  tcase_add_test(tc_core, s21_atan_10);

  suite_add_tcase(s, tc_core);

  return s;
}
