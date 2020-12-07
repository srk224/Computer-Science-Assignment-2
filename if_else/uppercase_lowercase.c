#include<stdio.h>
#include<string.h>
int main()
{
	char str;
	scanf("%c",&str);
	if(isupper(str))
	{
		printf("The character is uppercase");
	}
	else
	{
		printf("the character is lowercase");
	}
}
