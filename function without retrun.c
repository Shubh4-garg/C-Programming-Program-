#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main() 
{
	int w,x;
	printf("Enter first number: ");
	scanf("%d",&w);
	printf("Enter second number: ");
	scanf("%d",&x);
	sum(w,x);
	
}
void sum(int a, int b) 
{
	int c;
	c=a+b;
	printf("%d ",c);		
}