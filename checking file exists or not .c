//Checking file exists or not.........
#include <stdio.h>
int main(int argc,char *argv[]) {
	FILE *src=fopen(argv[1],"r");
	FILE *dest=fopen(argv[2],"w");
	if(src==NULL||dest==NULL) {
		printf("file not found");
		return 1;
	}
}   