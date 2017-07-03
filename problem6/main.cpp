#include <iostream>
#include <math.h>

int main() {
    long nmax = 100;
    long sumsquares = 0;
    long sum = 0;

    for (long i=0; i<=nmax; i++) {
        sumsquares += pow(i,2);
        sum += i;
    }

    printf("sum of squares - %li\n", sumsquares);
    printf("square of sums - %.0f\n", pow(sum,2));
    printf("sum square diff - %.0f\n", pow(sum,2) - sumsquares);
    return 0;
}