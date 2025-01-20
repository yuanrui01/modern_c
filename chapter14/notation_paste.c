#include<stdio.h>

#define MK_ID(n) i##n
int main(void) {
    
    int MK_ID(1), MK_ID(2), MK_ID(3);
    
    return 0;
}