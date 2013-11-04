#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

/* WHILE LOOP!
int main()
{
    int num1=1, num2 =10;
        while (num1<=10 || num2>=1)
        {
              p("%i*%i=%i\n", num1, num2, num1*num2);
              num1++;
              num2--;
        }
getch();
return 0;
}    
*/

/* WHILE LOOP!

int main()
{
    int num1=1, num2 =10, num3=0;
        while (num1<=10 || num2>=10)
        {
              num3= num1*num2;
              p("%i*%i=%i\n", num1, num2, num3);
              num1++;
              num2--;
        }
getch();
return 0;
}    

*/

/* DO WHILE LOOP!
int main()
{
    int num1=1, num2=10;
    
    do
    {
      p("%i*%i=%i\n", num1, num2, num1*num2);
              num1++;
              num2--;
    }
    while (num1<=10 || num2>=10);
    
    getch();
    return 0;
}
*/ 

// FOR LOOP!

int main ()
{
    int num1, num2;
    
    for (num1=1, num2=10; num1<=10||num2>=10; num1++, num2--)
    {
        p("%d*%d=%d\n", num1, num2, num1*num2);
    }
getch();
}
