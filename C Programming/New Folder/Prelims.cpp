#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define p printf
#define s scanf


int main()
{
    int  wow, max=11, absent, days;
    float rate, sss=180, ph=30, pbig=100, gross, nsalary, tax, deduc;
    char choice, star[20];
    

    p("Name:");
    gets(star);
    
    p("Contact No.:");
    s("%d", &wow);
    p("\nChoose Status:\n\n");
    p("Press[1]Contractual Rate\n");
    p("Press[2]Probitionary Rate\n");
    p("Press[3]Regular Rate\n");
    p("Press[4]Supervisor Rate\n");
    p("\nEnter Status:");
    s("%s", &choice);
    p("Enter day/s of work:");
    s("%d", &days);
    
    switch(choice)
                      case '1':
                           {
                            system("cls");
                             p("++EMPLOYEE PAY SLIP++\n\n");
                              p("Contractual\n\n");
                               p("Name:%s\n", &star);   
                                                   
                                          rate=298;
                                           gross=rate*days;
                                             p("Gross Salary:%.2f\n", gross);
                                               p("SSS:180.00\n");
                                                p("Philhealth:30.00\n");
                                                 p("Pag-ibig:100.00\n");
                                                  tax=gross*.12;
                                                   p("Tax:%.2f\n", tax);
                                                    deduc=sss+ph+pbig+tax;
                                                     p("Total Deduction:%.2f\n", deduc);
                                                      absent=max-days;
                                                       p("Absent:%d\n", absent);
                                                        nsalary=gross-deduc;
                                                         p("Net Salary:%.2f\n", nsalary);
                                                           break;
                           
                           
                        case '2':
                           {
                           system("cls");
                           p("++EMPLOYEE PAY SLIP++\n\n");
                           p("Probitionary\n\n");
                           p("Name:%s\n", &star);
                     
                           rate=382;
                           gross=rate*days;
                           p("Gross Salary:%.2f\n", gross);
                           p("SSS:180.00\n");
                           p("Philhealth:30.00\n");
                           p("Pag-ibig:100.00\n");
                           tax=gross*.12;
                           p("Tax:%.2f\n", tax);
                           deduc=sss+ph+pbig+tax;
                           p("Total Deduction:%.2f\n", deduc);
                           absent=max-days;
                           p("Absent:%d\n", absent);
                           nsalary=gross-deduc;
                           p("Net Salary:%.2f\n", nsalary);
                           break;
                           }
                           
                           case '3':
                                {
                           system("cls");
                           p("++EMPLOYEE PAY SLIP++\n\n");
                           p("Regular\n\n");
                           p("Name:%s\n", &star);
                           
                           rate=450;
                           gross=rate*days;
                           p("Gross Salary:%.2f\n", gross);
                           p("SSS:180.00\n");
                           p("Philhealth:30.00\n");
                           p("Pag-ibig:100.00\n");
                           tax=gross*.12;
                           p("Tax:%.2f\n", tax);
                           deduc=sss+ph+pbig+tax;
                           p("Total Deduction:%.2f\n", deduc);
                           absent=max-days;
                           p("Absent:%d\n", absent);
                           nsalary=gross-deduc;
                           p("Net Salary:%.2f\n", nsalary);
                           break;
                           }
                           
                           case '4':
                           {
                           system("cls");
                           p("++EMPLOYEE PAY SLIP++\n\n");
                           p("Supervisor\n\n");
                           p("Name:%s\n", &star);
                           
                           rate=600;
                           gross=rate*days;
                           p("Gross Salary:%.2f\n", gross);
                           p("SSS:180.00\n");
                           p("Philhealth:30.00\n");
                           p("Pag-ibig:100.00\n");
                           tax=gross*.12;
                           p("Tax:%.2f\n", tax);
                           deduc=sss+ph+pbig+tax;
                           p("Total Deduction:%.2f\n", deduc);
                           absent=max-days;
                           p("Absent:%d\n", absent);
                           nsalary=gross-deduc;
                           p("Net Salary:%.2f\n", nsalary);
                           break;
                           }     
                           
                           default:
                           p("Invalid Choice.. Press any key to exit");
}
    getch();
    return 0;
}
