#include<stdio.h>
void main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	int y;
	printf("Enter a number: ");
	scanf("%d",&y);
	int z;
	printf("Enter a number: ");
	scanf("%d",&z);
	
	if(x>y &&x>z)
	{
		printf("x is greater");
	}
	else if(y>x && y>z)
	{
		printf("y is greater");
	}
	else
	{
		printf("z is greater");
	}
	
}