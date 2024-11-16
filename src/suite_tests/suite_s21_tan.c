#include "../suitecases.h"

START_TEST(s21_tan_1) {
  double x = -NAN;
  char result[32];
  sprintf(result, "%.8lf", tan(x));
  char s21_tan_result[32];
  sprintf(s21_tan_result, "%.8Lf", s21_tan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_tan_result)),
                "\ntan(%lf) = %s, s21_tan(%lf) = %s", x, result, x,
                s21_tan_result);
}
END_TEST

START_TEST(s21_tan_2) {
  double x = NAN;
  char result[32];
  sprintf(result, "%.8lf", tan(x));
  char s21_tan_result[32];
  sprintf(s21_tan_result, "%.8Lf", s21_tan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_tan_result)),
                "\ntan(%lf) = %s, s21_tan(%lf) = %s", x, result, x,
                s21_tan_result);
}
END_TEST

START_TEST(s21_tan_3) {
  double x = -INFINITY;
  char result[32];
  sprintf(result, "%.8lf", tan(x));
  char s21_tan_result[32];
  sprintf(s21_tan_result, "%.8Lf", s21_tan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_tan_result)),
                "\ntan(%lf) = %s, s21_tan(%lf) = %s", x, result, x,
                s21_tan_result);
}
END_TEST

START_TEST(s21_tan_4) {
  double x = INFINITY;
  char result[32];
  sprintf(result, "%.8lf", tan(x));
  char s21_tan_result[32];
  sprintf(s21_tan_result, "%.8Lf", s21_tan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_tan_result)),
                "\ntan(%lf) = %s, s21_tan(%lf) = %s", x, result, x,
                s21_tan_result);
}
END_TEST

START_TEST(s21_tan_5) {
  double x = -0.;
  char result[32];
  sprintf(result, "%.8lf", tan(x));
  char s21_tan_result[32];
  sprintf(s21_tan_result, "%.8Lf", s21_tan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_tan_result)),
                "\ntan(%lf) = %s, s21_tan(%lf) = %s", x, result, x,
                s21_tan_result);
}
END_TEST

START_TEST(s21_tan_6) {
  double x = 0.;
  char result[32];
  sprintf(result, "%.8lf", tan(x));
  char s21_tan_result[32];
  sprintf(s21_tan_result, "%.8Lf", s21_tan(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_tan_result)),
                "\ntan(%lf) = %s, s21_tan(%lf) = %s", x, result, x,
                s21_tan_result);
}
END_TEST

START_TEST(s21_tan_7) {
  double x[] = {123456.78, 0.050616, 1.23e9, 1345.161991, 1.23148e-4};
  char result[32];
  char s21_tan_result[32];
  for (int i = 0; i < 5; i++) {
    sprintf(result, "%.8lf", tan(x[i]));
    sprintf(s21_tan_result, "%.8Lf", s21_tan(x[i]));
    ck_assert_msg(!strcmp(cut_(result), cut_(s21_tan_result)),
                  "\ntan(%lf) = %s, s21_tan(%lf) = %s", x[i], result, x[i],
                  s21_tan_result);
  }
}
END_TEST

START_TEST(s21_tan_8) {
  double x[] = {-123456.78, -0.050616, -1.23e9, -1345.161991, -1.23148e-4};
  char result[32];
  char s21_tan_result[32];
  for (int i = 0; i < 5; i++) {
    sprintf(result, "%.8lf", tan(x[i]));
    sprintf(s21_tan_result, "%.8Lf", s21_tan(x[i]));
    ck_assert_msg(!strcmp(cut_(result), cut_(s21_tan_result)),
                  "\ntan(%lf) = %s, s21_tan(%lf) = %s", x[i], result, x[i],
                  s21_tan_result);
  }
}
END_TEST

START_TEST(s21_tan_9) {
  double x[] = {s21_PI_2l, -s21_PI_2l};
  char result[32];
  char s21_tan_result[32];
  for (int i = 0; i < 5; i++) {
    sprintf(result, "%.8lf", tan(x[i]));
    sprintf(s21_tan_result, "%.8Lf", s21_tan(x[i]));
    ck_assert_msg(!strcmp(cut_(result), cut_(s21_tan_result)),
                  "\ntan(%lf) = %s, s21_tan(%lf) = %s", x[i], result, x[i],
                  s21_tan_result);
  }
}
END_TEST

Suite *suite_s21_tan() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_tan");

  tc_core = tcase_create("case_s21_tan");

  tcase_add_test(tc_core, s21_tan_1);
  tcase_add_test(tc_core, s21_tan_2);
  tcase_add_test(tc_core, s21_tan_3);
  tcase_add_test(tc_core, s21_tan_4);
  tcase_add_test(tc_core, s21_tan_5);
  tcase_add_test(tc_core, s21_tan_6);
  tcase_add_test(tc_core, s21_tan_7);
  tcase_add_test(tc_core, s21_tan_8);
  tcase_add_test(tc_core, s21_tan_9);

  suite_add_tcase(s, tc_core);

  return s;
}
