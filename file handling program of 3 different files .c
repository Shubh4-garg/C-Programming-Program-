#include <stdio.h>
int main() {
	FILE *input,*even,*odd;
	int number[20],i;
	input = fopen("number.txt", "w");
	if(input==NULL) {
		printf("File not found");
		return 1;
	}
	printf("Enter any 20 number");
	for (i=0;i<20;i++) {
		scanf("%d",&number[i]);
		fprintf(input,"%d\n",number[i]);
	}
	fclose(input);
	input=fopen("number.txt","w");
	even=fopen("Even.txt","w");
	odd=fopen("Odd.txt","w");
	if(even==NULL || odd==NULL) {
		printf("Even or odd file not found");
		return 1;
	}
	for(i=0;i<20;i++) {
		if(number[i]%2==0) {
			fprintf(even,"%d\n",number[i]);
		}
		else {
			fprintf(odd,"%d\n",number[i]);
		}
	}
	fclose(input);
	fclose(even);
	fclose(odd);
	return 0;
}