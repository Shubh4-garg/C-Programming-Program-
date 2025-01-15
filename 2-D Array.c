// 2-D Array matrix.............
#include<stdio.h>
void main(){
	int a[2][3]={
	{2,3,4},{5,6,7}};
	int i,s;
	printf("2-D array : \n");
	for(i=0;i<2;i++) {
		for(s=0;s<3;s++){
			printf("%d\t",a[i][s]);}
		printf("\n");}}