#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	if (a>0)
	printf("A is positive");
	
	else if (a<0)
	printf("A is negative");
	
	else
	printf("A is zero");
	
	
}