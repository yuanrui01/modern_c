#include<stdio.h>
#define GENERIC_MAX(type) \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}     

GENERIC_MAX(long);
GENERIC_MAX(int);
typedef unsigned long unsigned_long;
GENERIC_MAX(unsigned_long);

int main(void) {
    long l = long_max(1L, 2L);
    printf("l is %ld\n", l);
    return 0;
}