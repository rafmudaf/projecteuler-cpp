
#include <iostream>

using namespace std;

bool isEven(int val) {
    return val % 2 == 0;
}

int main() {

    int count = 0;
    int sum   = 0;
    int pm1   = 1;
    int p     = 1;
    int tmp   = 0;

    while (p < 4000000) {
        ++count;
        tmp = p;
        p += pm1;
        pm1 = tmp;
        if (isEven(pm1)) {
            printf("%i - %i even\n", count, pm1);
            sum += pm1;
        } else {
            printf("%i - %i odd\n", count, pm1);
        }
    }
    printf("sum of even values in fibonacci %i\n", sum);

    return 0;
}
