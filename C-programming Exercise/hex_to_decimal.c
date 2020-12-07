#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void main()
{
    char hex[32]={0};
    int  dec,i;
    int  cnt;   
    int  dig;   
    clrscr();
    printf("Please Enter any Hexadecimal Number: ");
    gets(hex);
 
    cnt=0;
    dec=0;
    for(i=(strlen(hex)-1);i>=0;i--)
    {
        switch(hex[i])
        {
            case 'A':
                dig=10; break;
            case 'B':
                dig=11; break;
            case 'C':
                dig=12; break;
            case 'D':
                dig=13; break;
            case 'E':
                dig=14; break;
            case 'F':
                dig=15; break;
            default:
                dig=hex[i]-0x30;
       }
       dec= dec+ (dig)*pow((double)16,(double)cnt);
       cnt++;
   }
 
   printf("Equivalent Decimal Value is: %d",dec);
   getch(); 
}
