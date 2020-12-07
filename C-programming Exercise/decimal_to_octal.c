#include<stdio.h>
#include<conio.h>

int main()
{
int no,rem[20],i=0,j;
clrscr();
printf("Please Enter any Decimal Number: ");
scanf("%d",&no);
while(no>0)
{
rem[i]=no%8;
i++;
no=no/8;
}
printf("Octal number is:");
for(j=i-1; j>=0; j--)
{
printf("  %d",rem[j]);
}
getch();
}
