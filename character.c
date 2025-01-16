#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		ch=ch+32;
		printf("%C",ch);
	}
	else if (ch>='a'&& ch<='z')
	{
		ch=ch-32;
		printf("%c",ch);
	}
	else 
		printf("invalid entry");
		getch();
	
}