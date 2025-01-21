#include<stdio.h>
#define FACTORIAL(x) (x == 0 ? 1 : x * FACTORIAL(x - 1))  // 递归宏

int main(void) {
    int x = FACTORIAL(3);
    return x;
}