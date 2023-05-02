﻿#include "tasks.h"

/*	Task 02. Arithmetic progression [арифметическая прогрессия]
 *
 *	Даны четыре целых числа. Определите, являются ли данные числа 
 *	(в указанном порядке) последовательными членами простейшей арифметической прогрессии и,
 *	если да, то какая именно задана арифметическая прогрессия: возрастающая, убывающая или монотонная.
 *
 *	Формат входных данных [input]
 *	На вход даётся четыре целых числа в диапазоне типа int.
 *
 *	Формат выходных данных [output]
 *	Программа должна вывести одну из следующих строчек:
 *	1) "Ascending arithmetic progression." - если числа образую возрастающую арифметическую прогрессию,
 *	2) "Descending arithmetic progression." - если числа образую убывающую арифметическую прогрессию,
 *	3) "Monotonic arithmetic progression." - если числа образую монотонную арифметическую прогрессию,
 *	4) "No arithmetic progression." - если числа не являются последовательными членами арифметической прогрессии.
 *
 *	[ input 1]: 1 2 3 4
 *	[output 1]: Ascending arithmetic progression.
 *
 *	[ input 2]: 2 4 6 8
 *	[output 2]: Ascending arithmetic progression.
 *
 *	[ input 3]: 15 10 5 0
 *	[output 3]: Descending arithmetic progression.
 *
 *	[ input 4]: 7 7 7 7
 *	[output 4]: Monotonic arithmetic progression.
 * 
 *	[ input 5]: 2 4 8 16
 *	[output 5]: No arithmetic progression.
 */

string task02(int a, int b, int c, int d) {
	if (a < b < c < d) {
		return "Ascending arithmetic progression.";
	}

	if (a > b > c > d) {
		return "Descending arithmetic progression.";
	}

	if (a == b == c == d) {
		return "Monotonic arithmetic progression";
	}
	else return "No arithmetic progression.";
}