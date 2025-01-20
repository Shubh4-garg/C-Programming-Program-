//Dynamic Memory Allocation(CALLOC)..........
#include <stdio.h>
#include <stdlib.h>//a library.....
int main() {
	int i;
	int *ptr;
	ptr = (int *)calloc(10, sizeof(int));
	if (ptr == NULL) {
		printf("NO Memory");
		return 1;
	}
	for (i=0;i<10;i++) {
		printf("%d\n",ptr[i]);
	}
	free(ptr);
	return 0;
}