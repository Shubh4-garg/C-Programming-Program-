#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main() 
{
	int w,x,y;
	printf("Enter first number: ");
	scanf("%d",&w);
	printf("Enter second number: ");
	scanf("%d",&x);
	y=sum(w,x);
	printf("Result= %d ",y);
	return 0;
}
int sum(int a,int b) 
{
	int c=a+b;
	return c;
}