#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,s=0,w;
	printf("Enter any number: ");
	scanf("%d",&n);
	w=n;
	while(n>0)
	{
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
		if(w==s)
		{
			printf("No is palindrome");
		}
		else
		{
			printf("no is not palindrome");
		}
	
}