#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
#define sg 0.08
#define my 0.10
#define ind 0.12


int main()
{ 
    char wew; int wow; float rate;  
    p("[S]-Singapore\n[M]-Malaysia\n[I]-Indonesia\n");    
    p("Enter Country Code:");
    s("%c", &wew);

    if(wew=='S'||wew=='s') 
{
    system("cls");
    p("Singapore\n");
    p("\nEnter purchase amount:");
    s("%d", &wow);
    
    p("\nThe coutry Code is S for Singapore\n");
    p("\nAmount purchase is %d\n", wow);
    rate=sg*wow;
    p("\nThe total Amount Rate is %.2f", rate);
    }
      


     
    else if(wew=='M'||wew=='m')
{
    system("cls");
    p("Malaysia\n");
    p("\nEnter purchase amount:");
    s("%d", &wow);
    
    p("\nThe coutry Code is S for Malaysia\n");
    p("\nAmount purchase is %d\n", wow);
    rate=my*wow;
    p("\nThe total Amount Rate is %.2f", rate);
    
}

   
    else if(wew=='I'||wew=='i') 
{
    system("cls");
    p("Indonesia\n");
    p("\nEnter purchase amount:");
    s("%d", &wow);
    
    p("\nThe coutry Code is S for Indonesia\n");
    p("\nAmount purchase is %d\n", wow);
    rate=ind*wow;
    p("\nThe total Amount Rate is %.2f", rate);
}
else 
{
     p("Invalid Choice");
}



getch();
}
    
    
