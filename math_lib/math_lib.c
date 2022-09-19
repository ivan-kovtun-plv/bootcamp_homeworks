#include "math_lib.h"

/* solved a conflict - remained both */

int dev1_sub(int a, int b) {
    return a - b;
}


int dev1_sum(int a, int b) {
    return a + b;
}

int dev2_pow(int a, int n) {
    if (n == 1) return a;
    if (n % 2 == 0) return dev2_pow(a*a, n/2);
    int tmp = dev2_pow(a*a, (n-1)/2);
    return tmp*a;
}

int dev2_add_1(int a) {
    return a+1;
}

