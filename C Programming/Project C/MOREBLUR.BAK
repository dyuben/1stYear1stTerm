#include<stdio.h>
#include<conio.h>

#define g gotoxy
#define p printf
#define s scanf


char *B1, *B2, *B3, *B4, *B5;
char BLUR[8]={'M', 'O','R','E','B','L','U','R'};

main()
{
  clrscr();
  B5=B4=BLUR;
  ++B4;
  B3=&BLUR[6];
  B2=B5+2;
  B1=&BLUR[7] -3;

  p("%c\t%c\t%c\t%c\t%c",*B1,*B2,*B3,*B4,*B5);

getch();
return 0;
}