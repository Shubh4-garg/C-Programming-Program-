#include<stdio.h>
#include<string.h>
int main() {
	char str1[20],str2[20];
	int res;
	printf("Enter the first String : ");
	scanf("%s",&str1);
	printf("Enter the second String : ");
	scanf("%s",&str2);
	res=strcmp(str1,str2);
	if(res==0) {
		printf("String is Equal");}
	else if(res<0) {
		printf("First String is Less \n");}
	else {
		printf("First string is Greater ");}
	return 0;
}