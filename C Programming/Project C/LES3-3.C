#include <stdio.h>
#include <conio.h>
#define g gotoxy
#define p printf
#define s scanf

double ave(double x,double y, double z);
double a,b,c;
double avg;

void main()
{
	clrscr();
	p("Input 3 numbers: ");
	s("%lf%lf%lf",&a,&b,&c);
	avg=ave(a,b,c);
	p("The average is %.2lf",avg);

getch();
}
double ave(double x,double y,double z)
{
	double a=(x+y+z)/3;
	return(a);
}