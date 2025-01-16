// Linear Searching.......
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
	int arr[5]={20,30,40,50,60};
	int k=50;
	int result=linear(arr,5,k);
	if(result!=-1) {
		printf("Element %d Found at index %d ", k,result);}
	else {
		printf("Key not fount");}
	return 0;
}