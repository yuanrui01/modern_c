#include<stdio.h>

int main(void) {

    int i, j;
    j = 555;
    scanf("%d /%d", &i, &j); // 空白字符匹配任意空白字符，包括零个
    printf("%d  %d", i, j);
    return 0;
}