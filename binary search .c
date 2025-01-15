//Binary search........
#include<stdio.h>
int binary(int arr[],int size, int target)
{
	int low = 0, high=size-1,mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(arr[mid]==target){
			return mid;}
		else if(arr[mid]<target){
			low = mid + 1;}
		else{
			high = mid - 1;}
	}
	return -1;
}
int main()
{
	int arr[]={10,20,30,40,50,60,70,80,90};
	int size = 10;
	int target;
	printf("Enter Number ");
	scanf("%d",&target);
	int result=binary(arr,size,target);
	if(result!= -1){
		printf("Element is found : %d",result);}
	else{
		printf("Element not found");}
	return 0;
}