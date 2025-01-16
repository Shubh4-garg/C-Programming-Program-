// Question 7 from pfd of day 3
#include<stdio.h>
#include<conio.h>
int sum(int x,int y)
{
	return x+y;
}
int diff(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
int main()
{
	int A,a,b;
	printf("Enter any task (1-4): 1:sum 2: Diff 3:mul 4:div");
	scanf("%d",&A);
	printf("Enter your digits");
	scanf("%d%d",&a,&b);
	if (A==1)
	{
		printf("Addition of x and y : %d\n",sum(a,b));
		int *ptr=&sum;
		printf("Value at address stored in ptr = %p\n",*ptr);
	}
	else if (A==2)
	{
		printf("Subtraction of x and y : %d\n",diff(a,b));
		int *ptr=&diff;
		printf("Value at address stored in ptr = %p\n",*ptr);
	}
	else if (A==3)
	{
		printf("Multiplication of x and y : %d\n",mul(a,b));
		int *ptr=&mul;
		printf("Value at address stored in ptr = %p\n",*ptr);
	}
	else if (A==4)
	{
		printf("Division of x and y : %d\n",div(a,b));
		int *ptr=&div;
		printf("Value at address stored in ptr = %p\n",*ptr);
	}
	else 
	{
		printf("invalid task given");
	}
	return 0;
}