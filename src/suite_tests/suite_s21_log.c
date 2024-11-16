#include "../suitecases.h"

// START_TEST(s21_log_1) {
//   double x[] = {-NAN, NAN,      -INFINITY,         INFINITY, -0.,     0.,
//                 1.,   2.234234, 234234234324.2342, 3.2e-6,   1.19e16, -12.3};
//   char result[192] = "\0";
//   char s21_log_result[192] = "\0";
//   for (int i = 0; i < 12; i++) {
//     sprintf(result, "%.8lf", log(x[i]));
//     sprintf(s21_log_result, "%.8Lf", s21_log(x[i]));
//     ck_assert_msg(!strcmp(cut_(result), cut_(s21_log_result)),
//                   "\nlog(%lf) = %s, s21_log(%lf) = %s", x[i], result, x[i],
//                   s21_log_result);
//   }
// }
// END_TEST

START_TEST(s21_log_1) {
  double x[] = {0.0000001, 1.,      2.234234, 234234234324.2342,
                3.2e-6,    1.19e16, 12.3,     61510651919161.16161};
  for (int i = 0; i < 8; i++) {
    long double result = log(x[i]);
    long double s21_log_result = s21_log(x[i]);
    long double diff = result - s21_log_result;
    ck_assert_msg(fabsl(diff) < 1e-6, "\nlog(%lf) = %Lf, s21_log(%lf) = %Lf",
                  x[i], result, x[i], s21_log_result);
  }
}
END_TEST

START_TEST(s21_log_2) {
  double x[] = {-NAN, NAN, -INFINITY, -23423.2134, -0.0000001};
  for (int i = 0; i < 5; i++) {
    ck_assert_ldouble_nan(s21_log(x[i]));
  }
}
END_TEST

START_TEST(s21_log_3) {
  double x[] = {INFINITY};
  for (int i = 0; i < 1; i++) {
    ck_assert_ldouble_infinite(s21_log(x[i]));
  }
}

Suite *suite_s21_log() {
  Suite *s = suite_create("s21_log");
  TCase *tc_case = tcase_create("case_s21_log");

  tcase_add_test(tc_case, s21_log_1);
  tcase_add_test(tc_case, s21_log_2);
  tcase_add_test(tc_case, s21_log_3);

  suite_add_tcase(s, tc_case);

  return s;
}
