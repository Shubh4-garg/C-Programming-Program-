#include<stdio.h>
void main() {
	int i,j,s,r;
	printf("Enter number of rows :");
	scanf("%d",&i);
	printf("Enter number of columns :");
	scanf("%d",&j);
	int a[i][j];
	for(s=0;s<i;s++) {
		for(r=0;r<j;r++) {
			printf("%d\t",s,r);
			scanf("%d",&a[s][r]);}}
	for(s=0;s<i;s++) {
		for(r=0;r<j;r++) {
			printf("%d",a[s][r]);}
		printf("\n");}
}