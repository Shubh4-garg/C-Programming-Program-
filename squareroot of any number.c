#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,s,abc;
	printf("enter a number: ",a);
	scanf("%d",&a);
	if (a>=0)
	{
		goto abc;
	}
	abc:
		s=sqrt(a);
		printf("square root of a number: =%d ",s);
}
		