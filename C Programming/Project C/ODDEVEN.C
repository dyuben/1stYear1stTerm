#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

int num1;

void main ()
{
  clrscr();
  g(3,3);
  p("Enter a Number: ");
  s("%i", &num1);

  if (num1%2== 1)
  {
   g(3,6);
   p("The Number is Odd");
  }

  else

  {
   g(3,6);
   p("The Number is Even");
  }

  getch();

}