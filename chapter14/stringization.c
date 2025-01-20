#include<stdio.h>

#define PRINT_INT(n) printf(#n " = %d\n", n);

int main(void) {
    PRINT_INT(10);
    PRINT_INT(10/2);
    return 0;
}