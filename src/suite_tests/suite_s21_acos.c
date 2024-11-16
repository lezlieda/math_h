#include "../suitecases.h"

START_TEST(s21_acos_1) {
  double x = -NAN;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_2) {
  double x = NAN;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_3) {
  double x = -INFINITY;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_4) {
  double x = INFINITY;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_5) {
  double x = -0.;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_6) {
  double x = 0.;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_7) {
  double x = -1.0;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_8) {
  double x = 1.0;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_9) {
  double x = 0.5;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_10) {
  double x = -0.5;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_11) {
  double x = 0.324523;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

START_TEST(s21_acos_12) {
  double x = -0.912950;
  char result[32];
  sprintf(result, "%.8lf", acos(x));
  char s21_acos_result[32];
  sprintf(s21_acos_result, "%.8Lf", s21_acos(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_acos_result)),
                "\nacos(%lf) = %s, s21_acos(%lf) = %s", x, result, x,
                s21_acos_result);
}
END_TEST

Suite *suite_s21_acos() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_acos");

  tc_core = tcase_create("case_s21_acos");

  tcase_add_test(tc_core, s21_acos_1);
  tcase_add_test(tc_core, s21_acos_2);
  tcase_add_test(tc_core, s21_acos_3);
  tcase_add_test(tc_core, s21_acos_4);
  tcase_add_test(tc_core, s21_acos_5);
  tcase_add_test(tc_core, s21_acos_6);
  tcase_add_test(tc_core, s21_acos_7);
  tcase_add_test(tc_core, s21_acos_8);
  tcase_add_test(tc_core, s21_acos_9);
  tcase_add_test(tc_core, s21_acos_10);
  tcase_add_test(tc_core, s21_acos_11);
  tcase_add_test(tc_core, s21_acos_12);

  suite_add_tcase(s, tc_core);

  return s;
}
