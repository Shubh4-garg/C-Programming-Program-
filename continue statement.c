#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	for(a=1; a<=10; a++)
	{
		if(a%3!=0)
		{
			continue;
		}
		printf("\t%d\n",a);
	}
	
}