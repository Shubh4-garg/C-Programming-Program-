#include<stdio.h>
void main()
{
	int x;
	printf("Enter a year: ");
	scanf("%d",&x);
	if ((x%4==0 &&x%100!=0)||(x%400==0))
	{
		printf("Year is a leap year");
	}
	else
	{
		printf("Not a leap year");
	}
	
}