// Linear Searching with user input.......
#include<stdio.h>
int linear(int arr[], int s,int k) {
	int i;
	for(i=0;i<s;i++){
		if(arr[i]==k) {
			return i; }
	}
	return -1;
}
int main() {
	int a,i,k;
	printf("Enter size of array: ",a);
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		printf("Enter array keys: \n",i);
		scanf("%d",&arr[i]);}
	for(i=0;i<a;i++){
		printf("array keys: %d\n",arr[i]);}
	printf("Enter a number to be searched : ");
	scanf("%d",&k);
	int result=linear(arr,a,k);
	if(result!=-1) {
		printf("Element %d Found at index %d ", k,result);}
	else {
		printf("Key not fount");}
	return 0;
}
