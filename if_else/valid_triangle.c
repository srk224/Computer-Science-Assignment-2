#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter angle one:\n");
	scanf("%d",&a);
	printf("Enter angle two:\n");
	scanf("%d",&b);
	printf("Enter angle three:\n");
	scanf("%d",&c);
	
	if((a+b+c)==180)
	{
		printf("The triangle is valid\n");
	}
	else
	{
		printf("The triangle is not possible\n");
	}
}
