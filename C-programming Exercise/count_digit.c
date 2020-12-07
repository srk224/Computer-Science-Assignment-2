#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	int count=1;
	while(n>10)
	{
		n=n/10;
		count++;
	}

	
   printf("DIGITS: %d",count);
	
	
	
}
