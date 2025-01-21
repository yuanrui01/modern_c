#include <stdio.h>

#define ERROR(...) fprintf(stderr, __VA_ARGS__)

int main(void) {
    int index = -1;
    ERROR("Range error, index is %d\n", index);
    return 0;
}