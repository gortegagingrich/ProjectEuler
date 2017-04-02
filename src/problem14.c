#include "headers/problem14.h"
#include <stdlib.h>

#define MAX 1000000

// keeping a cache of previously calculated lengths speeds this up tenfold
int *cache;

int problem14() {
	int maxLength, maxNum, tempLength;
	long i;

	maxLength = 0;
	maxNum = 0;

	cache = malloc(4 * MAX);

	for (i = 0; i < MAX; i++) {
		cache[i] = -1;
	}

	for (i = 1; i < MAX; i++) {
		tempLength = chainLength(i);
		cache[i-1] = tempLength;

		if (tempLength > maxLength) {
			maxLength = tempLength;
			maxNum = i;
		}
	}

	free(cache);

	return maxNum;
}

int chainLength(long n) {
	int length;

	length = 1;

	while (n > 1) {
		if (n <= MAX && cache[n-1] != -1) {
			return (length + cache[n-1]);
		}

		if (n%2 == 0) {
			n /= 2;
		} else {
			n = 3 * n + 1;
		}

		length++;
	}

	return length;
}