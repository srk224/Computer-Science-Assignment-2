#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter side one:\n");
	scanf("%d",&a);
	printf("Enter side two:\n");
	scanf("%d",&b);
	printf("Enter side three:\n");
	scanf("%d",&c);
	
	if(a+b<=c || a+c<=b || b+c<=a )
	{
		printf("The triangle is valid\n");
	}
	else
	{
		printf("The triangle is not possible\n");
	}
}
