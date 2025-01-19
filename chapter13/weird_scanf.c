#include<stdio.h>

int main(void) {
	int i,j;
	char s[] = "12324223";
	scanf("%d%s%d", &i, s, &j);

	printf("i is %d\n", i);
	printf("s is %s\n", s);
	printf("j is %d\n", j);
	return 0;
}