
#include "stdio.h"

/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 * 232792560
 */

bool isMultipleOf(int val, int query) {
    return val % query == 0;
}

bool isDivisibleByRange(int i, int from, int to) {
    for (int j=from; j<=to; j++) {
        if (!isMultipleOf(i, j)) {
            return false;
        }
    }
    return true;
}

int main() {
    int i = 1;
    while (true) {
        if (isDivisibleByRange(i, 11, 20) ) {
            printf("%i\n", i);
            break;
        }
        ++i;
    }
}
