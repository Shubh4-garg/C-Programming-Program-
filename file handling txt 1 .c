//File handling program..................................................
#include <stdio.h>
int main() {
	FILE *fp;
	char a[]="This is a sample copy\n End line";
	fp=fopen("emp.txt","w");
	if (fp == NULL) {
		printf("file not found");
		return 1;
	}
	fprintf(fp,"%s",a);
	fclose(fp);
	fp=fopen("emp.txt","r");
	if (fp == NULL) {
		printf("file not found");
		return 1;}
	printf("Text of file : \n");
	char ch;
	while((ch=fgetc(fp))!=EOF) {
		putchar(ch);
	}
	
	fclose(fp);
	return 0;
} 