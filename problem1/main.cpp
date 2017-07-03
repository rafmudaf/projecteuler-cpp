#include <iostream>

using namespace std;

bool isMultipleOf(int val, int query) {
    return val % query == 0;
}

int main() {
    int sum = 0;
    for (int i=1; i<1000; i++) {
        if (isMultipleOf(i, 3) || isMultipleOf(i, 5)) {
            sum += i;
        }
    }
    cout << sum << "\n";
    return 0;
}