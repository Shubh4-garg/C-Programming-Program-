//Array Indexing Program and take input from user.......
#include<stdio.h>
void main() {
	int a,i;
	printf("Enter size of array: ",a);
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		printf("Enter array keys: \n",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("array keys: %d\n",arr[i]);
	}
}