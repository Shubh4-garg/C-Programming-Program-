//Bubble Sort........
#include<stdio.h>
void main() {
	int a,i,s,temp,b;
	printf("Enter length of Array : ");
	scanf("%d", &a);
	int arr[a];
	printf("Enter array elements : ");
	for(i=0;i<a;i++){
		printf("Array keys is %d\n",i);
		scanf("%d",&arr[i]);}
	for(b=0;b<a;b++) {
		for(s=0;s<a-1;s++) {
		if(arr[s]>arr[s+1]) {
			temp=arr[s];
			arr[s]=arr[s+1];
			arr[s+1]=temp;}}}
	for(int t=0;t<=a-1;t++) {
		printf(" %d ",arr[t]);}}