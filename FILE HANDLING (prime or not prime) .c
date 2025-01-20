//ERROR HAI ISMA .............
#include <stdio.h>
int main() {
	FILE *enter,*prime,*nprime;
	int number[15],i,j;
	enter = fopen("list.txt", "w");
	if(enter==NULL) {
		printf("File not found");
		return 1;}
	printf("Enter any 15 number");
	for (i=0;i<15;i++) {
		scanf("%d",&number[i]);
		fprintf(enter,"%d\n",number[i]);}
	fclose(enter);
	enter=fopen("list.txt","w");
	prime=fopen("prime.txt","w");
	nprime=fopen("nprime.txt","w");
	if(prime==NULL || nprime==NULL) {
		printf("prime or nprime file not found");
		return 1;}
	for(i=0;i<15;i++) {
		if(number[1]!=2) {
			for (int j=2; j<(number[i]/2);j++) {
				if (number[i]%j!=0) {
					fprintf(prime,"%d",number[i]);
				}else {
					fprintf(nprime,"%d",number[i]);}}}}
	fclose(enter);
	fclose(prime);
	fclose(nprime);
	return 0;
}