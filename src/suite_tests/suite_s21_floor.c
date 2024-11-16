#include "../suitecases.h"

START_TEST(s21_floor_1) {
  double x = -NAN;
  char result[32];
  sprintf(result, "%.8lf", floor(x));
  char s21_floor_result[32];
  sprintf(s21_floor_result, "%.8Lf", s21_floor(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_floor_result)),
                "\nfloor(%lf) = %s, s21_floor(%lf) = %s", x, result, x,
                s21_floor_result);
}
END_TEST

START_TEST(s21_floor_2) {
  double x = NAN;
  char result[32];
  sprintf(result, "%.8lf", floor(x));
  char s21_floor_result[32];
  sprintf(s21_floor_result, "%.8Lf", s21_floor(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_floor_result)),
                "\nfloor(%lf) = %s, s21_floor(%lf) = %s", x, result, x,
                s21_floor_result);
}
END_TEST

START_TEST(s21_floor_3) {
  double x[] = {-INFINITY, INFINITY};
  for (int i = 0; i < 2; i++) {
    ck_assert_ldouble_infinite(s21_floor(x[i]));
  }
}
END_TEST

START_TEST(s21_floor_5) {
  double x = -0.;
  char result[32];
  sprintf(result, "%.8lf", floor(x));
  char s21_floor_result[32];
  sprintf(s21_floor_result, "%.8Lf", s21_floor(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_floor_result)),
                "\nfloor(%lf) = %s, s21_floor(%lf) = %s", x, result, x,
                s21_floor_result);
}
END_TEST

START_TEST(s21_floor_6) {
  double x = 0.;
  char result[32];
  sprintf(result, "%.8lf", floor(x));
  char s21_floor_result[32];
  sprintf(s21_floor_result, "%.8Lf", s21_floor(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_floor_result)),
                "\nfloor(%lf) = %s, s21_floor(%lf) = %s", x, result, x,
                s21_floor_result);
}
END_TEST

START_TEST(s21_floor_7) {
  double x = -11514.196;
  char result[32];
  sprintf(result, "%.8lf", floor(x));
  char s21_floor_result[32];
  sprintf(s21_floor_result, "%.8Lf", s21_floor(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_floor_result)),
                "\nfloor(%lf) = %s, s21_floor(%lf) = %s", x, result, x,
                s21_floor_result);
}
END_TEST

START_TEST(s21_floor_8) {
  double x = -1.23e-11;
  char result[32];
  sprintf(result, "%.8lf", floor(x));
  char s21_floor_result[32];
  sprintf(s21_floor_result, "%.8Lf", s21_floor(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_floor_result)),
                "\nfloor(%lf) = %s, s21_floor(%lf) = %s", x, result, x,
                s21_floor_result);
}
END_TEST

START_TEST(s21_floor_9) {
  double x = -16.0;
  char result[32];
  sprintf(result, "%.8lf", floor(x));
  char s21_floor_result[32];
  sprintf(s21_floor_result, "%.8Lf", s21_floor(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_floor_result)),
                "\nfloor(%lf) = %s, s21_floor(%lf) = %s", x, result, x,
                s21_floor_result);
}
END_TEST

START_TEST(s21_floor_10) {
  double x = 168.651;
  char result[32];
  sprintf(result, "%.8lf", floor(x));
  char s21_floor_result[32];
  sprintf(s21_floor_result, "%.8Lf", s21_floor(x));
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_floor_result)),
                "\nfloor(%lf) = %s, s21_floor(%lf) = %s", x, result, x,
                s21_floor_result);
}
END_TEST

Suite *suite_s21_floor() {
  Suite *s = suite_create("s21_floor");
  TCase *tc_core = tcase_create("case_s21_floor");

  tcase_add_test(tc_core, s21_floor_1);
  tcase_add_test(tc_core, s21_floor_2);
  tcase_add_test(tc_core, s21_floor_3);
  // tcase_add_test(tc_core, s21_floor_4);
  tcase_add_test(tc_core, s21_floor_5);
  tcase_add_test(tc_core, s21_floor_6);
  tcase_add_test(tc_core, s21_floor_7);
  tcase_add_test(tc_core, s21_floor_8);
  tcase_add_test(tc_core, s21_floor_9);
  tcase_add_test(tc_core, s21_floor_10);

  suite_add_tcase(s, tc_core);

  return s;
}