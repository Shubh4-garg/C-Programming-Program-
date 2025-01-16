#include<stdio.h>
#include<conio.h>
void tower(int,char,char,char);
void main()
{
	int n;
	char a,b,c;
	printf("Enter the number of disk");
	scanf("%d",&n);
	printf("Tower of Hanooi of %d Disk\n",n);
	tower(n,'a','b','c');

}
void tower(int n, char beg, char aux, char end)
{
	if(n<=0)
	{
		printf("\n Illegal entry");
	}
	else if(n==1)
	{
		printf("\n Move disk from %c to %c",beg,end);
	}
	else
	{
		tower(n-1,beg,end,aux);
		tower(1,beg,aux,end);
		tower(n-1,aux,beg,end);
	}
	
}