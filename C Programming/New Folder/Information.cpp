#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

int main()
{
    char nick[10]; char lname[10]; char mname[10]; char course[50];
    char addr[100];
    int num1;
    
    printf("First Name:");
    scanf("%s",&nick);
    printf("\nLast Name:");
    scanf("%s",&lname);
    printf("\nMiddle Name:");
    scanf("%s",&mname);
    printf("\nAddress:");
    scanf("%s",&addr);
    printf("\nCourse:");
    scanf("%s",&course);
    printf("\nDate enrolled:");
    scanf("%f",&num1);
    p("\nMode of Payment:");
    s("%s",&nick);
    
    
    getch();
    return 0;
    
}
