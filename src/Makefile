CC = gcc 
FLAG_ER = -Wall -Werror -Wextra -g -std=c11
S21_MATH_C = functions/s21*.c
S21_MATH_O = s21*.o
S21_SUITE_C = suite_tests/suite_s21*.c
S21_SUITE_O = suite_s21*.o
S21_TEST_C = tests/test_*.c
S21_TEST_O = test_*.o

all: clean test

s21_math.a: $(S21_MATH_C)
	$(CC) $(FLAG_ER) -c $(S21_MATH_C)
	ar r s21_math.a $(S21_MATH_O)
	rm -rf *.o
	ranlib s21_math.a

test: s21_math.a
	$(CC) $(FLAG_ER) -c $(S21_SUITE_C) main.c
	$(CC) $(FLAG_ER) -o test $(S21_SUITE_O) main.o s21_math.a -lcheck
	rm -rf *.o *.a
	./test

valgrind: s21_math.a
	$(CC) $(FLAG_ER) -c $(S21_SUITE_C) main.c
	$(CC) $(FLAG_ER) -o test $(S21_SUITE_O) main.o s21_math.a -lm -lcheck -lsubunit
	rm -rf *.o *.a
	./test

gcov_report:
	$(CC) $(FLAG_ER) --coverage -c $(S21_MATH_C)
	ar r s21_math.a $(S21_MATH_O)
	rm -rf *.o
	ranlib s21_math.a
	$(CC) $(FLAG_ER) -c $(S21_SUITE_C) main.c
	$(CC) $(FLAG_ER) --coverage -o test $(S21_SUITE_O) main.o s21_math.a -lm -lcheck
	./test
	# gcov s21*.gcda
	gcovr --html-details -o report.html
	open report.html

check:
	cppcheck --enable=all --inconclusive --std=c11 --suppress=missingIncludeSystem ./
	clang-format -n *.c *.h

check_apply:
	cppcheck --enable=all --inconclusive --std=c11 --suppress=missingIncludeSystem ./
	clang-format -i *.c *.h

clean:
	rm -rf *.o stest test *.a *.gcda *.gcno *.gcov report.*

rebuild: clean all
