#include "headers/problem3.h"
#include <math.h>

long problem3() {
	long n = 600851475143;
	int counter;
	long num, largest;

	num = n;
	counter = 2;

	while (counter*counter < num) {
		if (num % counter == 0) {
			num /= counter;
		} else {
			counter++;
		}
	}

	return num;
}