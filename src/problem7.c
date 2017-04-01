#include "headers/problem7.h"
const int SIZE = 200000;

int problem7() {
	char nums[SIZE];
	int i, j;

	for (i = 0; i < SIZE; i++) {
		nums[i] = 1;
	}

	for (i = 2; i*i < SIZE; i++) {
		if (nums[i]) {
			for (j = i*i; j < SIZE; j += i) {
				nums[j] = 0;
			}
		}
	}

	j = 1;

	for (i = 3; i < SIZE; i += 1) {
		if (nums[i]) {
			j++;

			if (j == 10001) {
				return i;
			}
		}
	}

	return i;
}