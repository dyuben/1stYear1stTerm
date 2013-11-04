#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf


// While (condion) {statement/s}

int main()
{
int x=3;

    while (x<=20)
          {
                 p("%d",x);
                 x+=3;        
          }

getch();
return 0;
}


/* Do {statement/s} while (condition)
int main()
{
int x=3;

    do
      {
          p("%d\t", x);
          x+=3;
      }
      while (x<=12);
      
getch();
return 0;        
}
*/
