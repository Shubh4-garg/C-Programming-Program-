#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1;
	abc:
		if(a%2==0)
		printf("%d\n",a);
	if(a<100)
	{
		a++;
		goto abc;
	}
}