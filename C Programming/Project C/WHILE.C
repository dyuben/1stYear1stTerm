#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

int x = 6;
main ()
{
   clrscr();

   while (x<=5)
   {
	p("hello %i\n",x);
	x = x+1;
   }
 for(x=1;x<=5;x++)
   {
	p("yo %i\n",x);
   }

 do
   {
	p("Hi %i\n",x);
	x+=1;

   }
	while (x<=5);

   getch();

}