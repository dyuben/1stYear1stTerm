#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf

int main()
{
    int star;
    
    p("Input Grade:");
    s("%d", &star);
    
    if (star>=97)
    p("\nYour GPA is 1.0");
    
    else if (star>=94)
    p("\nYour GPA is 1.25");
    
    else if (star>=90)
    p("\nYour GPA is 1.50");
    
    else if (star>=87)
    p("\nYour GPA is 1.75");
    
    else if (star>=84)
    p("\nYour GPA is 2.0");
    
    else if (star>=75)
    p("\nSatisfactory!O.O");
    
    else if (star<=74)
    p("\nYOU ARE FAILED! HAHA \n\nPress any key to Exit...");
    
       
   getch();
   return 0;
}
