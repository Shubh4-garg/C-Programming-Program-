//STRING COPY............
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main() {
	char a[20],b[20];
	printf("Enter String A : \n");
	gets(a);
	strncpy(b,a,5);
	printf("String B is : \n");
	puts(b);
	getch();
}