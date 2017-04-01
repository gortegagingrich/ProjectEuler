#include "headers/problem2.h"

const int MAX = 4000000;

// sum of even fibonaccis up to 4000000
long problem2() {
	long sum;
	int prev, current, temp;

	sum = 0;
	prev = 1;
	current = 2;

	while (current < 4000000) {
		if (current%2 == 0) {
			sum += current;
		}

		temp = current;
		current += prev;
		prev = temp;
	}

	return sum;
}