//Array indexing using pointer variable
#include<stdio.h>
void main() {
	int a[4]={2,4,6,8};
	int *p=a;
	int i;
	for(i=0;i<4;i++)
	{
		printf("%d=%d\n",i,*(p+i));
	}
}