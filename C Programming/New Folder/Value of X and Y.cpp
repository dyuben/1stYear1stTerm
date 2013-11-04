#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

int main()
{
    int b1,b2;
    
    p("The value of x is:");
    s("%d", &b1);
    
    p("\nThe value of y is:");
    s("%d", &b2);
    
    b1==b2;
    b2==b1;
    
    p("\nThe value of x is: %d\n", b2);
    p("\nThe value of y is: %d", b1);
    
    getch();
    return 0;
}
