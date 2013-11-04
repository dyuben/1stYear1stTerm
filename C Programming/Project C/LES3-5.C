#include <stdio.h>
#include <conio.h>
#define g gotoxy
#define p printf
#define s scanf

double tocel(double fahr);
double f,c;

void main()
{
	clrscr();
	p("Enter degrees in fahrenheit: ");
	s("%lf",&f);
	c=tocel(f);
	p("In fahrenheit:%.2lf",c);
getch();
}
double tocel(double fahr)
{
	double cel=.55*(fahr-32);
	return(cel);
}
