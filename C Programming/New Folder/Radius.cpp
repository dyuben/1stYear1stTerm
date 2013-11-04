#include<stdio.h>
#include<conio.h>
#define pi 3.1416
#define p printf
#define s scanf

int main()
{
    int r; float c;
    
    p("Enter desire radius:");
    s("%d",&r);
    c=pi*r*r;
    p("\nCircumference is %2f",c);
    getch();
}
