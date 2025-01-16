//STRING CONCATENATION.............
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() {
	char a[20],b[20];
	printf("Enter Two Strings ");
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
	return 0;	
}