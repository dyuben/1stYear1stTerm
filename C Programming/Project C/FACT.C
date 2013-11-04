#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

long int fact, num, ctr;

main ()
{
   fact = 1;
   clrscr();
   g(3,5);
   p("Enter the Number to ba factored: ");
   s("%li", &num);
   for(ctr = 1; ctr  <= num; ctr++)
   {
	fact*=ctr;
   }
	g(3,7);
	p("the factorial of the number is %li",fact);

   getch();

}