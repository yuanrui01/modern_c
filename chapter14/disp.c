#include<stdio.h>
#include<math.h>

#define DISP(f, d) printf(#f "(%g) = %g\n", d, f(d))

int main(void) {
	double d = 16;
	DISP(fabs, d);
	DISP(sqrt, d);

	return 0;
}


