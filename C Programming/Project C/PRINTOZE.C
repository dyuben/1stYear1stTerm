#include<stdio.h>
#include<conio.h>

#define g gotoxy
#define p printf
#define s scanf


int i,x;
int z;


main()
{
clrscr();

 g(5,5); p("Enter A Number: ");
 g(21,5);s("%d",&x);
 z=0;
 for(i=x;i>=0;i--) { z=z+3;g(3+z,7); p("%d",x);x=x-1; }

getch();
return 0;
}