#include<stdio.h>
#include<conio.h>
void main()
{
	printf("1:add,2:sub,3:mul,4:div");
	int a,b,cal,c;
	printf("enter a Operation1-4 ");
	scanf("%d",&cal);
	
	printf("enter a two value ");
	scanf("%d%d",&a,&b);
	
	switch(cal)
	{
		case 1:
			c=a+b;
			printf("%d",c);
			break;
		case 2:
			c=a-b;
			printf("%d",c);
			break;
		case 3:
			c=a*b;
			printf("%d",c);
			break;
		case 4:
			c=a/b;
			printf("%d",c);
			break;
		default:
				printf("Invalid entry");
			
	}
	
}