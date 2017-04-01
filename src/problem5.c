#include "headers/problem5.h"

int problem5() {
	long i;
	int j;

	for (i = 20; i < 0x7FFFFFFFF; i += 20) {
		for (j = 1; j <= 20; j++) {
			if (i%j != 0) {
				break;
			}

			if (j == 20) {
				goto end;
			}
		}
	}

	end:
	return i;
}