//File handling program..................................................
#include <stdio.h>
int main() {
	FILE *fp;
	char a[]="Hello \n I love C Programming.";
	fp=fopen("sal.txt","w");
	if (fp == NULL) {
		printf("file not found");
		return 1;
	}
	fprintf(fp,"%s",a);
	fclose(fp);
	char b[]="I hate CodeTantra!!!!!!";
	fp=fopen("sal.txt","a");
	if (fp == NULL) {
		printf("file not found");
		return 1;
	}
	fprintf(fp,"%s",b);
	fclose(fp);
	fp=fopen("sal.txt","r");
	if (fp == NULL) {
		printf("file not found");
		return 1;
	}
	printf("Text of file : \n");
	char ch;
	while((ch=fgetc(fp))!=EOF) {
		putchar(ch);
	}
	fprintf(fp,"%s",a);
	fclose(fp);
	return 0;
}