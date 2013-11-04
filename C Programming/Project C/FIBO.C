#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

int f1,f2,fib,x;

main ()
{

   clrscr();
   g(3,5);
   p("Enter 1st Number for fibonacci: ");
   s("%i", &f1);
   g(3,6);
   p("Enter 2nd Number for fibonacci: ");
   s("%i", &f2);
   for(x = 1; x  <= 8; x++)
   {
	fib=f1 + f2;
	f1 = f2;
	f2 = fib;
	p(" %i",fib);
   }


   getch();

}