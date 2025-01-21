#include<stdio.h>

#define N 100

void f(void);

int main(void) {
    f();
    #ifdef N
    #undef N
    #endif
    return 0;
}

void f(void) {
    #if defined(N)
        printf("N is %d", N);
    #else 
        printf("N is undefined.");
    #endif
}