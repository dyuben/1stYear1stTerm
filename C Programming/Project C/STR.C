#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

char a[]="Chicago", b[]="Bulls", c[20];

void main ()
{
   clrscr();
   strcpy(c,a);
   p("%s",c);
   strcat(c,b);
   p("\n%s",c);
   c[8]='a';
   p("\n%s",c);
   strupr(c);
   p("\n%s",c);
   strrev(c);
   p("\n%s",c);
   getch();


}