//Array of structure..............
#include <stdio.h>
struct book
{
	int id;
	char title[20];
	float price;
};
int main() {
	struct book b1[3]={
		{1,"C Program", 268.50},
		{2,"TAFL", 580.6},
		{3,"DBMS", 590.85}
	};
	for(int i=0;i<3;i++) {
		printf("ID %d\n",b1[i].id);
		printf("NAME %s\n",b1[i].title);
		printf("TITLE %f\n",b1[i].price);
	}
	return 0;
}
