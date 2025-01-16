//Manupulation of Array........
#include<stdio.h>
void main() {
	int i,n,s;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array element: \n");
	for(i=0;i<n;i++) {
		printf("Array keys is %d",i);
		scanf("%d",&arr[i]);}
	printf("Enter a Value to Add: ");
	scanf("%d",&s);
	for(i=0;i<n;i++) {
		arr[i]+=s; }
	for(i=0;i<n;i++) {
		printf("New key Elements: %d\n",arr[i]);}
}