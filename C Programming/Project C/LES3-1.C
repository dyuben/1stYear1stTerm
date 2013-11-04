#include <stdio.h>
#include <conio.h>
void about();
#define g gotoxy
#define p printf
#define s scanf

void main()
{
	clrscr();
	about();
	getch();

}

void about()
{
	p("Borland C++\n");
	p("Version 3.1\n");
	p("Copyright (c) 1990,1992 by\n");
	p("Borland International, Inc.\n");
}