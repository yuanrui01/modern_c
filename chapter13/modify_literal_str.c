#include<stdio.h>

int main(void) {
    char* p = "abcd";
    printf("p is %s", p);
    p[2] = 'z';
    printf("p is %s", p);
    return 0;
}