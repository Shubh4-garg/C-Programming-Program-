// 2-D Array matrix ADDITION.............
#include<stdio.h>
void main(){
	int a[2][3]={{2,3,4},{5,6,7}};
	int b[2][3]={{3,5,7},{2,4,2}};
	int c[2][3];
	int i,s;
	printf("2-D array : \n");
	for(i=0;i<2;i++) {
		for(s=0;s<3;s++){
			c[i][s]=a[i][s]+b[i][s];
			printf("%d\t",c[i][s]);}
		printf("\n");}}