#include <iostream>

//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

using namespace std;

bool isPalindromicNumber(int pal) {
    string palString = to_string(pal);
    uint64_t palLength = palString.length();
    uint64_t halfLength = palLength/2; // NOTE: integer division

    string front = palString.substr(0, halfLength);
    string back = palString.substr((palLength+1)/2, halfLength);

    for (int i=0; i<halfLength; i++) {
        if (front[i] != back[halfLength-1-i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int highestPalindrome = 0;
    int highestI = 0;
    int highestJ = 0;
    int imax = 999;
    int imin = 0;
    int jmax = 999;
    int jmin = 0;

    // loop over all i's
    for (int i=imax; i>imin; i--) {

        // when i becomes less than the minimum j, any future calculations are redundant
        if (i < jmin) {
            break;
        }

        // loop to the j that gave the previous palindrome
        for (int j=jmax; j>jmin; j--) {
            //printf("%i x %i = %i\n", i, j, i*j);
            if (isPalindromicNumber(i*j) && i*j > highestPalindrome ) {
                // store in memory the palindrome, i, and j
                highestPalindrome = i*j;
                highestI = i;
                highestJ = j;

                // theres no need to calculate numbers lower than this j
                // since the resulting palindrome will definitely be less
                jmin = j;
                break;
            }
        }
    }

    printf("the highest palindrome results from %i x %i = %i\n", highestI, highestJ, highestPalindrome);
    return 0;
}