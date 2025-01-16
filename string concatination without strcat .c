//string concatination without strcon.........
#include<stdio.h>
#include<conio.h>
void funcat(char a[],char b[])
{
	int i=0,j=0;
	while(a[i]!='\0') {
		i++;
	}
	while(b[j]!='\0') {
		a[i]=b[j];
		i++;
		j++;
	}
	a[i]='\0';
}
void main() {
	char a[200],b[200];
	printf("Enter a string  : ");
	scanf("%s", &a);
	printf("Enter a string  : ");
	scanf("%s", &b);
	funcat(a,b);
	printf("Value is %s\n", a);
}