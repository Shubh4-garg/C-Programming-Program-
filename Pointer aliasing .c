//Pointer Aliasing.............
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=6;
	int *ptr1=&a;
	int *ptr2=&a;
	printf("Value of x using PTR1: %d\n",*ptr1);
	printf("Value of x using PTR2: %d\n",*ptr2);
	*ptr1=200;
	printf("Value of x After using PTR2: %d\n",*ptr2);
	getch();
}