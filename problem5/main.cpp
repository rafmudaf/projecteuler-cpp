//#include "stdio.h"
//
///*
// * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
// * 232792560
// */
//
//bool isMultipleOf(int val, int query) {
//    return val % query == 0;
//}
//
//bool isDivisibleByRange(int i, int from, int to) {
////    return isMultipleOf(i, 20) &&
////           isMultipleOf(i, 19) &&
////           isMultipleOf(i, 18) &&
////           isMultipleOf(i, 17) &&
////           isMultipleOf(i, 16) &&
////           isMultipleOf(i, 15) &&
////           isMultipleOf(i, 14) &&
////           isMultipleOf(i, 13) &&
////           isMultipleOf(i, 12) &&
////           isMultipleOf(i, 11);
//
//    for (int j=from; j<=to; j++) {
//        if (!isMultipleOf(i, j)) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//
//    int i = 1;
//
//    while (true) {
//        if (isDivisibleByRange(i, 11, 20) ) {
////        if (isMultipleOf(i, 20) &&
////            isMultipleOf(i, 19) &&
////            isMultipleOf(i, 18) &&
////            isMultipleOf(i, 17) &&
////            isMultipleOf(i, 16) &&
////            isMultipleOf(i, 15) &&
////            isMultipleOf(i, 14) &&
////            isMultipleOf(i, 13) &&
////            isMultipleOf(i, 12) &&
////            isMultipleOf(i, 11)
//
////        if (i%20==0 &&
////            i%19==0 &&
////            i%18==0 &&
////            i%17==0 &&
////            i%16==0 &&
////            i%15==0 &&
////            i%14==0 &&
////            i%13==0 &&
////            i%12==0 &&
////            i%11==0 //&&
////            i%10==0 &&
////            i%9==0 &&
////            i%8==0 &&
////            i%7==0 &&
////            i%6==0 &&
////            i%5==0 &&
////            i%4==0 &&
////            i%3==0 &&
////            i%2==0 &&
////            i%1==0) {
////             ) {
//            printf("%i\n", i);
//
//            break;
//        }
//        ++i;
//    }
//}

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
