//Matrix printing using FUNCTION.......
#include<stdio.h>
void print(int a[2][3],int row, int col) {
	int i,j;
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	print(a,2,3);
	return 0;
}