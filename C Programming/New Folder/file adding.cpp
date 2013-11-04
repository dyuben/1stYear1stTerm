#include <stdio.h>
#include <ctype.h>


int main()

{
char Name[40];
int ID=0;
char Gender;
float Amt;
FILE *sfile;
if ((sfile = fopen("D:\\stud.txt", "a+")) == NULL)
ID = 1;
else
{
do{
fscanf(sfile,"%i %[^/]%*c %c %f%*c", &ID, Name, &Gender, &Amt);
}while (!feof(sfile));
ID += 1;
}
printf("Student ID: %04i", ID);
printf("\nName: ");
fflush(stdin);
gets(Name);
printf("Gender: ");
scanf(" %c", &Gender);
printf("Amount: ");
scanf("%f", &Amt);
printf("\nRecord saved!");
fprintf(sfile,"%i %s/ %c %.2f\n", ID, Name, Gender, Amt);
fclose(sfile);
}
