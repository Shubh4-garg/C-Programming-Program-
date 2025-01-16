#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	printf("1:cricle,2:rectangle,3:square,4:triangle\n");
	int a,b,area,c,d,s;
	printf("enter a Operation1-4 ");
	scanf("%d",&area);
	printf("enter two value ");
	scanf("%d%d",&a,&b);
	
	switch(area)
	{
		case 1:
			c=(3.14*a*a);
			printf("%d",c);
			break;
		case 2:
			c=a*b;
			printf("%d",c);
			break;
		case 3:
			c=a*b;
			printf("%d",c);
			break;
		case 4:
			printf("sides of triangle ",a);
			scanf("%d",&a);
			printf("sides of triangle ",b);
			scanf("%d",&b);
			printf("sides of triangle ",d);
			scanf("%d",&d);
			s=(a+b+d)/2;
			c=sqrt(s*(s-a)*(s-b)*(s-d));
			printf("%d",c);
			break;
	}
}