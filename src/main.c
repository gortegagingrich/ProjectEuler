#include <stdio.h>
#include "headers/problem2.h"
#include "headers/problem3.h"
#include "headers/problem6.h"
#include "headers/problem8.h"
#include "headers/problem10.h"
#include <stdlib.h>

int main() {
	int i, temp;
	int max = 0;

	int seed = time(NULL);
	srand(seed);

	printf("Problem #\tAnswer\n");
	printf("1\t\t%d\n", problem1());
	printf("2\t\t%ld\n", problem2());
	printf("3\t\t%ld\n", problem3());
	printf("4\t\t%d\n", problem4());
	printf("5\t\t%d\n", problem5());
	printf("6\t\t%d\n", problem6());
	printf("7\t\t%d\n", problem7());
	printf("8\t\t%ld\n", problem8());
	printf("9\t\t%d\n", problem9());
	printf("10\t\t%ld\n", problem10());

	return 0;
}