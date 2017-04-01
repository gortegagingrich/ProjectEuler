#include "headers/problem9.h"

int isPythagoreanTriplet(int,int,int);
int problem9();

int problem9() {
	int i, j, k;

	for (i = 1; i < 500; i++) {
		for (j = i;  j < 500; j++) {
			for (k = j; k < 500; k++) {
				if (i+j+k == 1000 && isPythagoreanTriplet(i,j,k)) {
					return i*j*k;
				}
			}
		}
	}

	return 0;
}

int isPythagoreanTriplet(int a, int b, int c) {
	return (a * a + b * b == c * c);
}