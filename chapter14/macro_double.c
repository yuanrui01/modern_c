#include <stdio.h>

#define DOUBLE(x) 2*x

int main(void) {
	printf("DOUBLE(1+1) is %d\n", DOUBLE(1+2));
	printf("DOUBLE(2) is %d\n", DOUBLE(2));
	return 0;
}