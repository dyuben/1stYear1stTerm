#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

/*
1.00 - 99-100
1.25 - 96-98
1.50 - 93-95
1.75 - 90-92
2.00 - 86-89
2.25 - 82-85
2.50 - 79-81
2.75 - 76-78
3.00 - =75
5.00 - <75
INVALID - >100 or <50
*/

int grade;

void main ()
{
   clrscr();
   g(3,3);
   p("Enter Grade: ");
   s("%i", &grade);

   if (grade >100 || grade < 50)
   {
      g(3,4);
      p("INVALID GRADE!!");
   }
   else if (grade>98\)
   {
      g(3,4);
      p("Your grade is 1.00");
   }
   else if (grade>96)
   {
      g(3,4);
      p("Your grade is 1.25");
   }
   else if (grade>93)
   {
      g(3,4);
      p("Your grade is 1.50");
   }
   else if (grade>90)
   {
      g(3,4);
      p("Your grade is 1.75");
   }
   else if (grade>86)
   {
      g(3,4);
      p("Your grade is 2.00");
   }
   else if (grade>82)
   {
      g(3,4);
      p("Your grade is 2.25");
   }
   else if (grade>79)
   {
      g(3,4);
      p("Your grade is 2.50");
   }
   else if (grade>76)
   {
      g(3,4);
      p("Your grade is 2.75");
   }
   else if (grade == 75)
   {
      g(3,4);
      p("Your grade is 3.00");
   }
   else if (grade < 75)
   {
      g(3,4);
      p("Your grade is 5.00");
   }
  getch();

}