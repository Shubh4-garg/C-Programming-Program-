//COUNT LENGHT OF STRING WITHOUT STRLEN ..............
#include<stdio.h>
#include<conio.h>
void main() {
	char a[100];
	printf("Enter a string  : ");
	scanf("%s", &a);
	int x,s=0;	
	while(a[x]!='\0') {
		x++;}
	printf("Length : %d",x);}        