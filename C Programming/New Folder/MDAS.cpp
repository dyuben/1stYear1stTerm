#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

int main()
{
    int num1, num2, sum, diff, prod, quo;
    
    p("Enter first number:");
    s("%d", &num1);
    p("\nEnter second number:");
    s("%d", &num2);
    
    sum=num1+num2;
    p("\nThe sum is: %d\n", sum);
    
    diff=num1-num2;
    p("\nThe diffenrence is: %d\n", diff);
    
    prod=num1*num2;
    p("\nThe product is: %d\n", prod);
    
    quo=num1/num2;
    p("\nThe quotient is: %d\n", quo);
 
    
    getch();
    return 0;
}
