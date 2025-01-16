//function without argument without return value.
#include<stdio.h>
#include<conio.h>
void sum();
void main() 
{
	sum();
	getch();
}
void sum() 
{
	int c,a,b;
	printf("Enter two no. ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);
	
}