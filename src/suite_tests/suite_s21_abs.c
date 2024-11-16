#include "../suitecases.h"

START_TEST(s21_abs_1) {
  int x = (int)NAN;
  char abs_result[32];
  sprintf(abs_result, "%d", abs(x));
  char s21_abs_result[32];
  sprintf(s21_abs_result, "%d", s21_abs(x));
  ck_assert_msg(strcmp(abs_result, s21_abs_result) == 0,
                "abs(%d) = %s, s21_abs(%d) = %s", x, abs_result, x,
                s21_abs_result);
}
END_TEST

START_TEST(s21_abs_2) {
  int x = (int)-NAN;
  char abs_result[32];
  sprintf(abs_result, "%d", abs(x));
  char s21_abs_result[32];
  sprintf(s21_abs_result, "%d", s21_abs(x));
  ck_assert_msg(strcmp(abs_result, s21_abs_result) == 0,
                "abs(%d) = %s, s21_abs(%d) = %s", x, abs_result, x,
                s21_abs_result);
}
END_TEST

START_TEST(s21_abs_3) {
  int x = (int)INFINITY;
  char abs_result[32];
  sprintf(abs_result, "%d", abs(x));
  char s21_abs_result[32];
  sprintf(s21_abs_result, "%d", s21_abs(x));
  ck_assert_msg(strcmp(abs_result, s21_abs_result) == 0,
                "abs(%d) = %s, s21_abs(%d) = %s", x, abs_result, x,
                s21_abs_result);
}
END_TEST

START_TEST(s21_abs_4) {
  int x = (int)-INFINITY;
  char abs_result[32];
  sprintf(abs_result, "%d", abs(x));
  char s21_abs_result[32];
  sprintf(s21_abs_result, "%d", s21_abs(x));
  ck_assert_msg(strcmp(abs_result, s21_abs_result) == 0,
                "abs(%d) = %s, s21_abs(%d) = %s", x, abs_result, x,
                s21_abs_result);
}
END_TEST

START_TEST(s21_abs_5) {
  int x = 0;
  char abs_result[32];
  sprintf(abs_result, "%d", abs(x));
  char s21_abs_result[32];
  sprintf(s21_abs_result, "%d", s21_abs(x));
  ck_assert_msg(strcmp(abs_result, s21_abs_result) == 0,
                "abs(%d) = %s, s21_abs(%d) = %s", x, abs_result, x,
                s21_abs_result);
}
END_TEST

START_TEST(s21_abs_6) {
  int x = -2147483648;
  char abs_result[32];
  sprintf(abs_result, "%d", abs(x));
  char s21_abs_result[32];
  sprintf(s21_abs_result, "%d", s21_abs(x));
  ck_assert_msg(strcmp(abs_result, s21_abs_result) == 0,
                "abs(%d) = %s, s21_abs(%d) = %s", x, abs_result, x,
                s21_abs_result);
}
END_TEST

START_TEST(s21_abs_7) {
  int x = 2147483647;
  char abs_result[32];
  sprintf(abs_result, "%d", abs(x));
  char s21_abs_result[32];
  sprintf(s21_abs_result, "%d", s21_abs(x));
  ck_assert_msg(strcmp(abs_result, s21_abs_result) == 0,
                "abs(%d) = %s, s21_abs(%d) = %s", x, abs_result, x,
                s21_abs_result);
}
END_TEST

START_TEST(s21_abs_8) {
  int x = 1;
  char abs_result[32];
  sprintf(abs_result, "%d", abs(x));
  char s21_abs_result[32];
  sprintf(s21_abs_result, "%d", s21_abs(x));
  ck_assert_msg(strcmp(abs_result, s21_abs_result) == 0,
                "abs(%d) = %s, s21_abs(%d) = %s", x, abs_result, x,
                s21_abs_result);
}
END_TEST

START_TEST(s21_abs_9) {
  int x = -1;
  char abs_result[32];
  sprintf(abs_result, "%d", abs(x));
  char s21_abs_result[32];
  sprintf(s21_abs_result, "%d", s21_abs(x));
  ck_assert_msg(strcmp(abs_result, s21_abs_result) == 0,
                "abs(%d) = %s, s21_abs(%d) = %s", x, abs_result, x,
                s21_abs_result);
}
END_TEST

Suite *suite_s21_abs() {
  Suite *suite;
  TCase *test_case;

  suite = suite_create("s21_abs");

  test_case = tcase_create("case_s21_abs");

  tcase_add_test(test_case, s21_abs_1);
  tcase_add_test(test_case, s21_abs_2);
  tcase_add_test(test_case, s21_abs_3);
  tcase_add_test(test_case, s21_abs_4);
  tcase_add_test(test_case, s21_abs_5);
  tcase_add_test(test_case, s21_abs_6);
  tcase_add_test(test_case, s21_abs_7);
  tcase_add_test(test_case, s21_abs_8);
  tcase_add_test(test_case, s21_abs_9);

  suite_add_tcase(suite, test_case);

  return suite;
}
