#include <stdio.h>
#include <conio.h>
#define g gotoxy
#define p printf
#define s scanf

void swap(int a,int b);

int x,y;

void main()
{
	clrscr();
	p("input 1st: ");
	s("%d",&x);
	p("input 2nd: ");
	s("%d",&y);
	swap(x,y);
	p("1st:%d\n2nd:%d\n",y,x);
getch();
}
void swap(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
}
