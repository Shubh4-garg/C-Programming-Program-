//Reverse of a STRING..........
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() {
	char a[20];
	printf("Enter a String");
	gets(a);
	strrev(a);
	puts(a);
	return 0;	
}