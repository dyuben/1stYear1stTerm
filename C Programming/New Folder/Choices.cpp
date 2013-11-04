#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

int main()
{
    char lol;
    p("Select Choices\n");
    p("\n[A][a]-Excellent!:)\n[B][b]-Very Good!\n[C][c]-Satisfactory!\n[D][d]-Needs Improvement!:(\n");
    p("\nEnter Choices:");
    s("%s", &lol);
    
    if(lol== 'A' || lol=='a')
    p("EXCELLENT! ^_^");
    
    else if (lol== 'B' || lol=='b')
    p("VERY  GOOD!");
    
    else if (lol== 'C' || lol=='c')
    p("Satisfactory");
    
    else if (lol== 'D' || lol=='d')
    p("Needs Improvement O_O");
    
    else 
    p("Invalid Choice\nPress any key to continue");

getch ();
return 20;
}
