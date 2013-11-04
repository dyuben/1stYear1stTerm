#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

struct phonebook
{
	char name[20];
	long int tel;
	char address[20];
}x;

void main ()
{

	clrscr();
	p("Enter name: ");
	s("%s",&x.name);
	p("Enter tel: ");
	s("%s",&x.tel);
	p("Enter Address: ");
	s("%s",&x.address);
	p("Name:%s\n",x.name);
	p("Tel:%s\n",x.tel);
	p("Address:%s\n",x.address);
	getch();
}