//Structure USER DEFINED............
#include <stdio.h>
struct sum {
	int a;
	int b;
};
int main() {
	int c;
	struct sum s;
	printf("Enter any one value : ");
	scanf("%d",&s.a);
	printf("Enter any one value : ");
	scanf("%d",&s.b);
	c = s.a+s.b;
	printf("Sum = %d", c);
	return 0;
}