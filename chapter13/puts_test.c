#include<stdio.h>
#include<string.h>

int main(void) {
    char s[] = "Hsjodi";
    char* p;
    for (p = s; *p; p++) {
        --*p;
    }
    puts(s);
    return 0;
}