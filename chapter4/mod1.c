#include<stdio.h>

int main(void) {

    // C99之后取余数结果的符号与第一个操作数保持一致
    printf("%d\n", (9%-7));
    printf("************\n");
    printf("%d\n", (-9%7));
    return 0;
}