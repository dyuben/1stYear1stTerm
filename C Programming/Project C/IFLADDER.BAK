#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

int g1,g2,g3,ave;

void main()
{
  clrscr();
  g(3,3);
  p("Enter 1st Grade: ");
  s("%i",&g1);

  g(3,4);
  p("Enter 1st Grade: ");
  s("%i",&g2);

  g(3,5);
  p("Enter 1st Grade: ");
  s("%i",&g3);

  ave=(g1+g2+g3)/3;

  if (ave<75)
  {

   p("The average is%i: Needs Improvement",ave);

  }

  else if(ave<=80)
  {

   p("The average is %i: Fair ",ave);

  }

  else if(ave<=85)
  {

   p("The average is %i: Good ",ave);

  }

  else if(ave<=90)
  {

   p("The average is %i: Very Good ",ave);

  }

  else if(ave<=100)
  {

   p("The average is %i: Excellent ",ave);

  }

  getch();
}