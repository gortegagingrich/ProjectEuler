#include "headers/problem1.h"

int problem1() {
        int i, count;
        int results[1000];

        for (i = 0; i < 1000; i++) {
                results[i] = 0;
        }

        for (i = 0; i < 1000; i += 3) {
                results[i] = 1;
        }

        for (i = 0; i < 1000; i += 5) {
                results[i] = 1;
        }

        count = 0;

        for (i = 0; i < 1000; i++) {
                if (results[i] == 1) {
                        count += i;
                }
        }

        return count;
}