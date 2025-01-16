#include<stdio.h>
void main()
{
	int a = 23;
	int b = 68;
	int c=a+b;
	a=c-a;
	b=c-b;
	printf(" a = %d", a);
	printf(" b = %d ", b);
}