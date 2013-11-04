#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
#define exchangerate 51.50

int main()
{
    int dol; float equi;
    
    p("\t\t\tINFORMATICS MONEY CHANGER\n");
    
    p("\nEnter Dollar Amount:$");
    s("%d", &dol);
    
    equi=dol*exchangerate;
    
    p("\nPeso Equivalent:P%.2f\n", equi);
    
    getch();
    
    return 0;
}
