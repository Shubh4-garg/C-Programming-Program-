//function without argument with return value.
#include<stdio.h>
#include<conio.h>
int sum();
int main() 
{
	int w;
	w=sum();
	printf("Result= %d ",w);
	getch();
}
int sum() 
{
	int a,b,c;
	printf("Enter two no. ");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}