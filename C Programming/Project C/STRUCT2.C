#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

struct phoneboook
{
	char name[20];
	long int tel;
	char address[20];
}x,y,z,a;

void display(phonebook a)
void read(phonebook &a)

void main()
{
   clrscr();
   read(x);
   read(y);
   read(z);
   display(x);
   display(y);
   display(z);
   getch();
}
void display(phonebook a)
{
   p("Name:%s\n",a.name);
   p("tel:%s\n",a.tel);
   p("Address:%s\n",a.address);
}
void read(phonebook &a)
{

   p("Enter name: ");
   s("%s",&a.name);
   p("Enter tel: ");
   s("%s",&a.tel);
   p("Enter Address: ");
   s("%s",&a.address);
}