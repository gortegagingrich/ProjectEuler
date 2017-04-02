#include <stdio.h>
#include "headers/problem2.h"
#include "headers/problem3.h"
#include "headers/problem8.h"
#include "headers/problem10.h"
#include "headers/problem13.h"
#include "headers/problem15.h"
#include <time.h>

#define SIZE 15

void test(int id) {
	clock_t start, end;
	int iresult = -1;
	long lresult = -1;
	__uint128_t llresult = -1;

	switch (id) {
		case 1:
			start = clock();
			iresult = problem1();
			end = clock();
			break;
		case 2:
			start = clock();
			lresult = problem2();
			end = clock();
			break;
		case 3:
			start = clock();
			lresult = problem3();
			end = clock();
			break;
		case 4:
			start = clock();
			iresult = problem4();
			end = clock();
			break;
		case 5:
			start = clock();
			iresult = problem5();
			end = clock();
			break;
		case 6:
			start = clock();
			iresult = problem6();
			end = clock();
			break;
		case 7:
			start = clock();
			iresult = problem7();
			end = clock();
			break;
		case 8:
			start = clock();
			lresult = problem8();
			end = clock();
			break;
		case 9:
			start = clock();
			lresult = problem9();
			end = clock();
			break;
		case 10:
			start = clock();
			lresult = problem10();
			end = clock();
			break;
		case 11:
			start = clock();
			lresult = problem11();
			end = clock();
			break;
		case 12:
			start = clock();
			iresult = problem12();
			end = clock();
			break;

		case 13:
			start = clock();
			lresult = problem13();
			end = clock();
			break;
		case 14:
			start = clock();
			iresult = problem14();
			end = clock();
			break;
		case 15:
			start = clock();
			lresult = problem15();
			end = clock();
			break;
	}

	if (iresult != -1) {
		printf("%d\t\t%f\t%d\n", id, 1.0 * (end - start) / CLOCKS_PER_SEC, iresult);
	} else if (lresult != -1) {
		printf("%d\t\t%f\t%ld\n", id, 1.0 * (end - start) / CLOCKS_PER_SEC, lresult);
	}
}

int main() {
	int i;

	printf("Problem #\tTime\t\tAnswer\n");
	
	for (i = 1; i <= SIZE; i++) {
		test(i);
	}

	return 0;
}