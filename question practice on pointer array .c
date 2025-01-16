//Question to find the sum of two munbers and then find the address of third variable.........
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf(" Enter values of a and b : ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("The value after addition is : %d\n",c);
	int *ptr=&c;
	printf("Pointer ptr points to address %p\n",ptr);
	printf("Value at address stored in ptr = %d\n",*ptr);
	getch();
}