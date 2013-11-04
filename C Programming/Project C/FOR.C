#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

int x;
main ()
{
   clrscr();

   for (x = 65;x <= 90;x++)
   {
	p("Letter %c\t",x);

   }
   p("\n\n");

   for (x = 122;x >= 97;x--)
   {
	p("letter %c\t",x);
   }

   getch();

}