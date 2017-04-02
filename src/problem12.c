#include "headers/problem12.h"
#include <stdio.h>

int problem12() {
	int i, val, temp;

	i = 1;
	val = 0;

	while (numDivisors(val) <= 500) {
		val += i;
		i++;
	}

	return val;
}

int maxInt = 0;

int numDivisors(int n) {
	int count, i;
	count = 1;

	for (i = 1; i*i <= n; i++) {
		if (n%i == 0) {
			count++;
			count++;
		}
	}

	return count;
}