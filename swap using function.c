// Call by refrence.........
#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
void main()
{
	int a=20,b=30;
	printf("old values = %d%d\n",a,b);
	swap(&a,&b);
	getch();
}
void swap(int *x, int *y)
{
	int q;
	q=*x;
	*x=*y;
	*y=q;
	printf("new value %d%d",*x,*y);
}
