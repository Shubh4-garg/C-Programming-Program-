// Question 4 from pfd of day 3
// auto and static
#include<stdio.h>
int xyz()
{
	auto int a = 10;
	printf("Auto variable : %d\n",a);
}
int xyz()
{
	xyz();
	return 0;
}
#include<stdio.h>
int xyz()
{
	static int count =10;
	count++;
	printf("Static variable count : %d\n",count);
}
int xyz()
{
	xyz();
	xyz();
	xyz();
	return 0;
}