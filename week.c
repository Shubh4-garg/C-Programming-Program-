#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("enter a week: ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
			default:
				printf("invalid input");
			
	}
}