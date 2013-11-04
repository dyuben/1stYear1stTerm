#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
#define sh switch

/*int main()
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
            
            case 'C':
            case 'c':
                 system("cls");
                 p("Press any key to exit...");
                 break;
    
                
*/              
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
                  if (ftw=='B'||ftw=='b')
                              {
                                         system("cls");
                                         p("\nInput Student Name:");
                                         s("s", &ename);
                                         p("\nInput Student Number:");
                                         s("%d", &ecode);
                                         p("\nYour name is: %s\n" ,ename);
                                         p("\nYour Number is:%d", ecode);
                               }
                                         
                                              
                                              
            
            


    getch();
    return 0;
}
