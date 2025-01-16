//STRING LOWERCASE.............
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() {
	char a[20];
	printf("Enter a String");
	gets(a);
	strlwr(a);
	puts(a);
	return 0;
}