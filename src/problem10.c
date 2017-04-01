#include "headers/problem10.h"

long problem10() {
	long sum;
	int i,j;
	char nums[2000000];

	for (i = 0; i < 2000000; i++) {
		nums[i] = 1;
	}

	for (i = 2; i*i < 2000000; i++) {

		if (nums[i]) {

			for (j = i*i; j < 2000000; j += i) {
				nums[j] = 0;
			}
		}
	}

	sum = 2;

	for (i = 3; i < 2000000; i += 1) {
		if (nums[i]) {
			sum += i;
		}
	}

	return sum;
}