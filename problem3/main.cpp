#include <iostream>
#include "math.h"

/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 *
 * References:
 * https://en.wikipedia.org/wiki/Primality_test
 * https://www.mathsisfun.com/numbers/prime-factorization-tool.html
 */

using namespace std;

bool isPrime(uint64_t n) {
    if (n <= 1) {
        return false;
    } else if (n <= 3) {
        return true;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    int i = 1;
    int testvalue = 0;
    int root = (int)sqrt(n);
    while (testvalue < root) {
        testvalue = 6*i-1;
        if (n == testvalue) {
            return true;
        } else if (n % testvalue == 0) {
            return false;
        }

        testvalue = 6*i+1;
        if (n == testvalue) {
            return true;
        } else if (n % testvalue == 0) {
            return false;
        }

        i++;
    }

    return true;
}

int main() {
    uint64_t startingval = 600851475143;
    uint64_t currentval = startingval;
    uint64_t divisor = 2;

    uint64_t maxtest = (uint64_t)sqrtl(startingval);
    while (divisor <= maxtest) {
        // if the divisor reaches the max, this is a prime number
        if (divisor == maxtest && currentval % divisor != 0) {
            divisor = startingval;
            break;
        }

        // find the smallest prime number that is a factor of the current value
        while (currentval % divisor != 0 || !isPrime((uint64_t)divisor)) {
            divisor += 1;
        }

        // calculate the division of the current value and its smallest factor
        double result = (double)currentval/(double)divisor;

        printf("%llu / %llu = %5.2f\n", currentval, divisor, result );
        currentval = (uint64_t)result;

        if (result == 1) {
            break;
        }
    }

    printf("the largest prime factor of %llu is %llu\n", startingval, divisor);

    return 0;
}
