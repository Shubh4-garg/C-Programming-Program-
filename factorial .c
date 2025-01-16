// to find the factorial of a number.
#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	fact(a);
	printf("result=%d",&a);
	return 0;
}
int fact(int x)
{
	int n=1;
	for(int i=1;i<=x;i++)
	{
		n*=i;
	}
	return n;
}