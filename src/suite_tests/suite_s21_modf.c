#include "../suitecases.h"

START_TEST(s21_modf_1) {
  double x[] = {1.23e-45,
                0.,
                -0.,
                123.45,
                13345.23452345,
                -123.45,
                -13345.23452345,
                25345235234523452345.,
                -25345235234523452345.,
                110,
                1.7976931348623157E+308,
                INFINITY,
                -INFINITY};
  for (int i = 0; i < 13; i++) {
    double intpart = 0;
    double fractpart = 0;
    double s21_intpart = 0;
    double s21_fractpart = 0;
    fractpart = modf(x[i], &intpart);
    s21_fractpart = s21_modf(x[i], &s21_intpart);
    char result[64];
    sprintf(result, "%.8lf", fractpart);
    char s21_modf_result[64];
    sprintf(s21_modf_result, "%.8lf", s21_fractpart);
    ck_assert_msg(!strcmp(cut_(result), cut_(s21_modf_result)),
                  "\nmodf(%lf) = %s, s21_modf(%lf) = %s", x[i], result, x[i],
                  s21_modf_result);
    ck_assert_msg(intpart == s21_intpart,
                  "\nmodf(%lf) = %lf, s21_modf(%lf) = %lf", x[i], intpart, x[i],
                  s21_intpart);
  }
}
END_TEST

START_TEST(s21_modf_2) {
  double x = NAN;
  double intpart = 0;
  double fractpart = 0;
  double s21_intpart = 0;
  double s21_fractpart = 0;
  fractpart = modf(x, &intpart);
  s21_fractpart = s21_modf(x, &s21_intpart);
  char result[64];
  sprintf(result, "%.8lf", fractpart);
  char s21_modf_result[64];
  sprintf(s21_modf_result, "%.8lf", s21_fractpart);
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_modf_result)),
                "\nmodf(%lf) = %s, s21_modf(%lf) = %s", x, result, x,
                s21_modf_result);
  sprintf(result, "%.8lf", intpart);
  sprintf(s21_modf_result, "%.8lf", s21_intpart);
  ck_assert_msg(!strcmp(cut_(result), cut_(s21_modf_result)),
                "\nmodf(%lf) = %s, s21_modf(%lf) = %s", x, result, x,
                s21_modf_result);
}
END_TEST

Suite *suite_s21_modf() {
  Suite *s;
  TCase *tc_pos;

  s = suite_create("s21_modf");  // Инициализация Suite

  tc_pos = tcase_create("case_s21_modf");  // Инициализация TCase
  tcase_add_test(tc_pos, s21_modf_1);
  tcase_add_test(tc_pos, s21_modf_2);
  suite_add_tcase(s, tc_pos);  // Добавление TCase в Suite

  return s;
}