//DETECTION OF POSITION OF STRING................
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() {
	char a[]="find the character 'n'";
	char *pos=strchr(a,'n');
	if(pos) {
		printf("Value 'n' is found %ld\n",pos-a);}
	else {
		printf("Character Not Found ");}
}