#include "headers/problem6.h"

int problem6() {
	return squareOfSums(100) - sumOfSquares(100);
}

long sumOfSquares(int n) {
	int sum = 0;

	while (n > 0) {
		sum += n * n;
		n--;
	}
	
	return sum;
}

long squareOfSums(int n) {
	int sum = (n * n+1) / 2;

	return sum * sum;
}