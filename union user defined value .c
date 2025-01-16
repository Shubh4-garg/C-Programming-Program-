#include <stdio.h>
#include <string.h>
union book
{
	int id;
	char name[20];
	float price;
};
int main() {
	union book b1; 
		printf("Enter book ID : ");
		scanf("%d",&b1.id);
		printf("Enter book name : ");
		scanf("%s",&b1.name);
		printf("Enter book price : ");
		scanf("%f",&b1.price);
	return 0;
}
