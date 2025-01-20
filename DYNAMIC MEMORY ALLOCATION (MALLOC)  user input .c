//Dynamic memory allocation (MALLOC).........
#include <stdio.h>
#include <stdlib.h>//a library.....
int main() 
{
	int i;
	int *p;
	int a;
	printf("Enter the size : ");
	scanf("%d", &a);
	p=(int *)malloc(a *sizeof(int));
	if (p == NULL) {
		printf("Memory not Allocated");
		return 1; 
	}
	for ( i = 0; i<a; i++) {
		printf("enter values : ");
		scanf("%d",&p[i]);
	}
	for (i = 0; i < a; i++) {
		printf("p[%d]=%d\n", i,p[i]);
	}
	free(p);
	return 0;
}