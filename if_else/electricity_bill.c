#include<stdio.h>
int main()
{
	float unit;
	float perunit;
	printf("Enter Electricity unit:\n");
	scanf("%d",&unit);
	if(unit<=50)
	{
		perunit=0.50;
	}
	else if(unit<=150 && unit>50)
	{
		perunit=0.75;
	}
	else if(unit>150 && unit <=250)
	{
		perunit=1.20;
	}
	else
	{
		perunit=1.5;
	}
	float bill,totalbill;
	bill=(unit*perunit);
	totalbill=bill+0.2*bill;
	printf("The total Electricity bill: %d",totalbill);
	
}
