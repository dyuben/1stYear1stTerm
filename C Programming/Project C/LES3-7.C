#include <stdio.h>
#include <conio.h>
#define pi 3.1416
#define g gotoxy
#define p printf
#define s scanf

double r,ar;

double area(double rad)
{
	return(pi*rad*rad);
}


void main()
{
	clrscr();
	p("Please input radius: ");
	s("%lf",&r);
	ar=area(r);
	p("The area of the triangle is %.2lf",ar);
getch();
}

