#include <time.h>

#include "suitecases.h"

void run_testcase(Suite *testcase) {
  SRunner *sr = srunner_create(testcase);
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);
}

void run_tests() {
  Suite *list_cases[] = {
      suite_s21_abs(),  suite_s21_acos(),  suite_s21_asin(), suite_s21_atan(),
      suite_s21_ceil(), suite_s21_floor(), suite_s21_cos(),  suite_s21_exp(),
      suite_s21_fmod(), suite_s21_sin(),   suite_s21_log(),  suite_s21_sqrt(),
      suite_s21_tan(),  suite_s21_modf(),  suite_s21_pow(),  NULL};
  for (int i = 0; list_cases[i] != NULL; i++) {
    run_testcase(list_cases[i]);
  }
}

int main() {
  run_tests();
  return 0;
}
