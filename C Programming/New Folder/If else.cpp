#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

//IF ELSE STATEMENT 

int main()

{ 
    int a,b;
p("Enter Digits\n");
s("%d", &a);
p("Enter Digits\n");
s("%d", &b);

        if (a>1 && a<10)
          if (b>1 && b<10)
          
             if(a>b)
             p("a is greater than b");
                  else if(b>a)
                  p("b is greater than a");
              
              else
              p("both Digits are equal");
          
          
     else 
     p("Out of range");
     else
     p("Sorry Invalid number\nPress any key to Continue...");     
     
     getch();
}
 

    // #SWITCH#
/*     
int main()
{
char choice;
p("Press[S]-Start\nPress[C]-Continue\nPress[X]-Exit\n");
p("Enter choice:");
s("%c", &choice);


switch (choice)
       {
               case 'S':
               case 's':
                    p("Loading...");
                    break;
               case 'C':
               case 'c':
                    p("Continue...");
                    break;
               case 'X':
               case 'x':
                    p("Exit...");
                    break;
               Default:
                    p("Invalid input");
       }
               

getch();

}
*/
