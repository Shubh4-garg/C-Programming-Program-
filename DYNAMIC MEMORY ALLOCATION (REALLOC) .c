//Dynamic Memory Allocation(REALLOC) by user input..........
#include <stdio.h>
#include <stdlib.h>//a library.....
int main() {
	int i;
	int *p;
	p=(int *)malloc(3 *sizeof(int));
	if (p == NULL) {
		printf("Memory not Allocated");
		return 1; 
	}
	for ( i = 0; i < 3 ; i++) {
		p[i]=i+1;
	}
	p=(int *)realloc(p,7*sizeof(int));
	for ( i = 3; i < 7 ; i++) {
		p[i]=i+1;
	}
	for (i = 0 ; i < 7 ; i++) {
		printf("%d\n", p[i]);
	}
	free(p);
	return 0;
}