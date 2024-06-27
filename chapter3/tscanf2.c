#include<stdio.h>

int main(void) {
    int c;
    // 如果scanf以空白字符结尾，会导致多余的等待，会把后续的所有空白字符吃掉，知道下一个非空白字符
    scanf("%d ", &c);
    return 0;
}