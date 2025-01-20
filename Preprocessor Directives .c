//Preprocessor Directives
#define PI 3.14
#define SQUARE(x)((x)*(x))
#include <stdio.h>
int main() {
	printf("PI: %.2f\n", PI);
	printf("Square of 5: %d\n",SQUARE(5));
	return 0;
}