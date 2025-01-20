//Dynamic Memory Allocation(CALLOC) by user input..........
#include <stdio.h>
#include <stdlib.h>//a library.....
int main() {
	int i;
	int *ptr;
	int a;
	printf("Enter the size : ");
	scanf("%d", &a);
	ptr = (int *)calloc(a, sizeof(int));
	if (ptr == NULL) {
		printf("NO Memory");
		return 1;
	}
	for (i=0;i<a;i++) {
		printf("enter values : ");
		scanf("%d",&ptr[i]);
		
	}
	for (i = 0; i < a; i++) {
		printf("ptr[%d]=%d\n", i,ptr[i]);
	}
	free(ptr);
	return 0;
}