#include "headers/problem15.h"

#define SIZE 20

long problem15() {
	int i, j;
	long left, up;
	long grid[SIZE][SIZE];

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			left = (i) ? grid[i-1][j]: 1;
			up = (j) ? grid[i][j-1]: 1;

			grid[i][j] = left + up;
		}
	}

	return grid[SIZE-1][SIZE-1];
}

