//ARGC /ATOI Function..................
#include <stdio.h>
void main(const int argc, const char *argv[]) {
	int a,b,c;
	printf("%d\n ",argc);
	printf("%s\n ",argv[0]);
	printf("%d\n ",atoi(argv[1]));
	printf("%d\n ",atoi(argv[2]));
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=a+b;
	printf("%d\n",c);
}