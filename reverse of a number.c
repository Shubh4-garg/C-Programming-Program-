#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,s=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
	printf("Sum=%d",s);
}