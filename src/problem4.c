#include "headers/problem4.h"

int problem4() {
	int i, j, k, max;

	max = 0;

	for (i = 100; i < 1000; i++) {
		for (j = 100; j < 1000; j++) {
			k = i * j;

			if (k > max) {
				max = isPalindrome(k) ? k : max;
			}
		}
	}

	return max;
}

int isPalindrome(int n) {
	// should only encounter 6 digit numbers
	int left, right;

	left = 100000;
	right = 1;

	while (left > right) {
		if ((n / right)%10 != (n / left)%10) {
			return 0;
		}

		left /= 10;
		right *= 10;
	}

	return 1;
}