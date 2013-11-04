#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf


int main()

{
    char name[30]; int hwork; float g, r;
    

    p("Employee Name:");
    s("%s",&name);
    p("\nRate per Hour:");
    s("%f",&r);
    p("\nHour/s Work:");
    s("%d",&hwork);
    
        
    g=r*hwork;
    
    p("\nSalary: %.2f",g);
    
    
    
    getch();
    return 0;
}
