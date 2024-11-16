# math_h
Implementation of some functions from the math.h library.

### Обзор некоторых функций "math.h"

| No. | Function | Description |
| --- | -------- | ----------- |
| 1 | `int abs(int x)` | вычисляет абсолютное значение целого числа |
| 2 | `long double acos(double x)` | вычисляет арккосинус |
| 3 | `long double asin(double x)` | вычисляет арксинус |
| 4 | `long double atan(double x)` | вычисляет арктангенс |
| 5 | `long double ceil(double x)` | возвращает ближайшее целое число, не меньшее заданного значения |
| 6 | `long double cos(double x)` | вычисляет косинус |
| 7 | `long double exp(double x)` | возвращает значение e, возведенное в заданную степень |
| 8 | `long double fabs(double x)` | вычисляет абсолютное значение числа с плавающей точкой |
| 9 | `long double floor(double x)` | возвращает ближайшее целое число, не превышающее заданное значение |
| 10 | `long double fmod(double x, double y)` | остаток операции деления с плавающей точкой |
| 11 | `long double log(double x)` | вычисляет натуральный логарифм |
| 12 | `long double pow(double base, double exp)` | возводит число в заданную степень |
| 13 | `long double sin(double x)` | вычисляет синус |
| 14 | `long double sqrt(double x)` | вычисляет квадратный корень |
| 15 | `long double tan(double x)` | вычисляет тангенс |  

Также, для облегчения жизни в коде реализованы функции библиотеки <math.h>: s21_frexp, s21_ldexp, s21_modf.

Выполнено покрытие unit-тестами функций библиотеки c помощью библиотеки Check.

Групповой проект выполнялся совместно с пиром mebblera (как-то так). По сути, каждый сделал проект по отдельности, потом наиболее удачные функции были слиты в один проект.

Абсолютно точно не за моим авторством представлена функция s21_pow, остальные, кажется, мои. mebblera написал ооочень много тестов, чем сильно способствовал улучшению кода. Сначала очень многие, а потом и просто многие давали фейл - их из проекта убрали перед сдачей (школьные автотесты 100%). 

Однако, поскольку проект делался "под мак", на линухе часть тестов фейлится по причине Nan != -Nan

На WSL запустить (пока) не удалось.
