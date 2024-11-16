#include "../suitecases.h"

START_TEST(s21_sqrt_1) {
  double x = -NAN;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_2) {
  double x = NAN;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_3) {
  double x = INFINITY;
  ck_assert_ldouble_infinite(s21_sqrt(x));
}
END_TEST

START_TEST(s21_sqrt_4) {
  double x = -INFINITY;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_5) {
  double x = -0.0;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_6) {
  double x = 0.0;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_7) {
  srand(time(0) + rand());
  double x = rand() % 1000000 * 1e-6;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_8) {
  double x = rand() % 1000000 * 1e-6;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_9) {
  double x = rand() * 1e-6;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_10) {
  double x = rand() * 1e-6;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_11) {
  double x = rand() * 1e-6;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_12) {
  double x = rand() * rand() * 1e-6;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_13) {
  double x = rand() * rand() * 1e-6;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_14) {
  double x = rand() * rand() * 1e-6;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_15) {
  double x = rand() % 1000000 * 1e-6;
  x = -x;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

START_TEST(s21_sqrt_16) {
  double x = rand() * 1e-6;
  x = -x;
  char result[32];
  sprintf(result, "%.8lf", sqrt(x));
  char s21_sqrt_result[32];
  sprintf(s21_sqrt_result, "%.8Lf", s21_sqrt(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_sqrt_result)),
                "\nsqrt(%lf) = %s, s21_sqrt(%lf) = %s", x, result, x,
                s21_sqrt_result);
}
END_TEST

Suite *suite_s21_sqrt() {
  Suite *s = suite_create("s21_sqrt");
  TCase *tc_case = tcase_create("case_s21_sqrt");

  tcase_add_test(tc_case, s21_sqrt_1);
  tcase_add_test(tc_case, s21_sqrt_2);
  tcase_add_test(tc_case, s21_sqrt_3);
  tcase_add_test(tc_case, s21_sqrt_4);
  tcase_add_test(tc_case, s21_sqrt_5);
  tcase_add_test(tc_case, s21_sqrt_6);
  tcase_add_test(tc_case, s21_sqrt_7);
  tcase_add_test(tc_case, s21_sqrt_8);
  tcase_add_test(tc_case, s21_sqrt_9);
  tcase_add_test(tc_case, s21_sqrt_10);
  tcase_add_test(tc_case, s21_sqrt_11);
  tcase_add_test(tc_case, s21_sqrt_12);
  tcase_add_test(tc_case, s21_sqrt_13);
  tcase_add_test(tc_case, s21_sqrt_14);
  tcase_add_test(tc_case, s21_sqrt_15);
  tcase_add_test(tc_case, s21_sqrt_16);

  suite_add_tcase(s, tc_case);

  return s;
}
