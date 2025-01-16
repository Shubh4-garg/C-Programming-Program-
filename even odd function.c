//error hai isma


#include<stdio.h>
void B(int);
void A(int);
void A(int n)
{
	int A;
	if(n>0)
	{
		printf("enter the number ",n);
		void B(n-1);
	}	
}
void B(int n)
{
	int B;
	if(n>0)
	{
		printf("enter the number ",n);
		void A(n - 1);
	}	
}
void main()
{
	int n=50;
}