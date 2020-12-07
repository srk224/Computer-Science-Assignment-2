#include<stdio.h>
#include<conio.h>

int main()
{
int num,rem[20],hex=0,i=0,j;
clrscr();
printf("Enter any number: ");
scanf("%d",&num);
while(num>0)
  {
    rem[i] = num % 16;
    num = num / 16;
    i++;
  }
printf("Hexadecimal number: ");
for(j=i-1; j>=0 ; j--)
  {
    switch(rem[j])
    {
      case 10:
	  printf("A");
	  break;
      case 11:
	  printf("B");
	  break;
      case 12:
	  printf("C");
	  break;
      case 13:
	  printf("D");
	  break;
      case 14:
	  printf("E");
	  break;
      case 15:
	  printf("F");
	  break;
      default :
	 printf("%d",rem[j]);
    }
  }
getch();
}
