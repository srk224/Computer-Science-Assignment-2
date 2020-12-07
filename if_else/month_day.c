#include<stdio.h>
int main()
{
	int n;
	printf("Enter Month Number:\n");
	scanf("%d",&n);
	if(n==1 || n==3 || n==5 || n==7 || n==9 || n==11)
	{
		printf("The month has 31 days\n");
	}
	else if(n==2)
	{
		printf("The month has 28 days");
	}
	else
	{
		printf("The month has 30 days");
	}
}
