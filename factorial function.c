#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int x,y;
	printf("enter a value: ");
	scanf("%d", &x);
	y=fact(x);
	printf("factorial=%d",y);
	getch();
	return 0;
}
int fact(int a)
{
	int n;
	if(a==0)
	{
		return 1;
	}
	else
	{
		n=a*fact(a-1);
		return n;
	}
}