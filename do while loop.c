#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0;
	do
	{
		printf("Enter some numbers (0 to stop): ");
		scanf("%d",&a);
		b=b+a;
	}
	while(a!=0);
		printf("Total sum =%d\n",b);
}
