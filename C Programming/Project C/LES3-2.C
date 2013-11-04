#include <stdio.h>
#include <conio.h>
#define g gotoxy
#define p printf
#define s scanf

int square(int x);
int t,x;

void main()
{
	clrscr();
	p("Please input a number: ");
	s("%d",&x);

	t=square(x);
	p("The square of %d is %d",x,t);

getch();
}

int square(int x)
{
return(x*x);
}