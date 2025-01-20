//Dynamic memory allocation (MALLOC).........
#include <stdio.h>
#include <stdlib.h>//a library.....
int main()
{
	int i;
	int *p;
	p=(int *)malloc(5 *sizeof(int));
	if (p == NULL) {
		printf("Memory not Allocated");
		return 1; 
	}
	for ( i = 0; i<5; i++) {
		p[i]=i+1;
	}
	for (i = 0; i < 5; i++) {
		printf("p[%d]\n", p[i]);
	}
	free(p);
	return 0;
}