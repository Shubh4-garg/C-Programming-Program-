//2-D Array Multiplication of Matrix........
#include<stdio.h>
void main(){
	int a[2][2]={{2,3},{5,6}};
	int b[2][2]={{3,5},{2,4}};
	int c[2][2];
	int i,s,d;
	printf("2-D array : \n");
	for(i=0;i<2;i++) {
		for(s=0;s<2;s++){
			for(d=0;d<2;d++) {
				c[i][s]+=a[i][d]*b[d][s];}
				printf("%d\t",c[i][s]);}
		printf("\n");}
}