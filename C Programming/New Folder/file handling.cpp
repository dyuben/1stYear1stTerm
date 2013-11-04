#include<stdio.h>
#include<string.h>
#include<conio.h>
#define p printf
#define s scanf

int main()
{
    char empcode[20];
    char empcodeinput[10];
    char empname[20];
    char emplevel[10];
    int found;
    float rate;
    
    FILE *efile;
    p("Enter Employee code:");
    s("%s",&empcodeinput); // get the employee code from the user!
    //g: folder name
    efile=fopen("g://userpass","a+");
    // it will open a file if it is existing then it will read the content of your file if not then it will create
    do {
        fscanf(efile,"%s %s %s %f", empcode, empname, emplevel, &rate); // scan the contetnt of your file (employee.txt)
        if (strcmp(empcodeinput, empcode)==0)// compare 2 strings STRING COMPARE - "strcmp"
                                                // if True then the value is 0
                                 {
                                 p("\nEmployee Code:%s\n", empcode);
                                 p("Employee Name:%s\n", empname);
                                 p("Employee Level:%s\n",emplevel);
                                 p("Employee rate:%.2f\n", rate);
                                 }
        } while (!feof(efile));

                                 
    getch();
    return 0;
    }
