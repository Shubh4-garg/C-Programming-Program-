// pointer ussage 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *ptr=&a;
	printf("Value of A = %d\n",a);
	printf("Address of A = %p\n",&a);
	printf("Pointer ptr points to address %p\n",ptr);
	printf("Value at address stored in ptr = %d\n",*ptr);
	getch();
}