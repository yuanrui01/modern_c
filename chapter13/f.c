#include<stdio.h>

int f(char* s, char* t);

int main(void) {
    int r1 = f("abcd", "babc");
    int r2 = f("abcd", "bcd");
    printf("r1 is %d\n", r1);
    printf("r2 is %d\n", r2);
    return 0;
}

// return the index of the first element that t no contains
// else return zero
int f(char* s, char* t) {
    char* p1, *p2;

    for (p1 = s; *p1; ++p1) {
        for (p2 = t; *p2; ++p2) {
            if (*p1 == *p2) break;
        }
        if (*p2 == '\0') break;
    }
    return p1 - s;
}
