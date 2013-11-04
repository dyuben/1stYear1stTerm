#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
#define sh switch

int main()
{
   char ftw, a[10]; int b;
   
   p("[A]-EmployeeInformation\n[B]-StudentInformation\n[C]-Close");
    p("\nEnter Choice:");
    s("%c", &ftw);
    
 
    sh(ftw)
 {   
            case 'A':
            case 'a':
                 system("cls");
                 p("EmployeeInformation\n");
                 
                 p("\nInput Employee Name:");
                 s("%s", &a);
                 p("\nInput Employee Number:");
                 s("%d", &b);
                 p("\nName:%s\n\nNumber:%d", a,b);
                 break;
                 
            case 'B':
            case 'b':
                 system("cls");
                 p("StudentInformation\n");
                 
                 p("\nInput Student Name:");
                 s("%s", &a);
                 p("\nInput Student Number:");
                 s("%d", &b);
                 p("\nName:%s\n",a);
                 p("\nNumber:%d",b);
                 break;
    
                 
                
/*              
            int main()
            {
                  char ftw, ename[10];
                  int ecode;
                  p("[A]-EmployeeInformation\n[B]-StudentInformation\n[C]-Close");
                  p("\nEnter Choice:");
                  s("%c", &ftw);
                  
                  
                  if(ftw=='A'||ftw=='a');
                  {            
                               system("cls");
                               p("\nInput Employee Name:");
                               s("%s", &ename);
                               p("\nInput Employee Number:");
                               s("%d", &ecode);
                               p("\nYour name is: %s\n" ,ename);
                               p("\nYour Number is:%d", ecode);
                               }
                  
                                              
                                              
            
            
*/
}
    getch();
    return 0;
}

/* ELSE IF
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
*/

/* Rate per hour
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
*/
