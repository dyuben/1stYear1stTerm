#include<stdio.h>
#include<conio.h>

#define g gotoxy
#define p printf
#define s scanf

int x,y,z,i;

intNum1[10]={10,20,30,40,50,60,70,80,90,100};
intNum2[10]={21,22,23,24,25,26,27,28,29,30};


main()
{
 clrscr();

 for(i=0;i<=9;i++)
 {
   x=intNum1[i] % 2;
   y=intNum2[i] % 3;

   if(y==0)
   { z=intNum1[i] * intNum2[i]; }
   else if(x==0)
   { z=intNum1[i] + intNum2[i]; }

   printf("Output %d is %d\n",i+1,z);
 }
 getch();
 return 0;
}