//Structure ............
#include <stdio.h>
struct abc {
	int i;
	char a[20];
	float b;
};
void main() {
	struct abc d={1, "Rahul", 20.5};
	printf("No.%d\n",d.i);
	printf("Name.%s\n",d.a);
	printf("Age.%f\n",d.b);
}