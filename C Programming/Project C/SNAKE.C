#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

int x,y;
main ()
{

   clrscr();
   for( x = 1; x <= 80; x++)
   {
	g(x,1);
	p ("@");
	delay (1000);
   }
   for (y=1; y <= 24; y++)
   {
	g(80,y);
	p("@");
	delay (1000);
   }
   for(x=80; x>=1; x--)
   {
	g(x,24);
	p("@");
	delay(1000);
   }
   for (y=24 ; y>=1; y--)
   {	g(1,y);
	p("@");
	delay(1000);
   }
   for( x = 2; x <= 79; x++)
   {
	g(x,2);
	p ("@");
	delay (1000);
   }
   for (y=2; y <= 23; y++)
   {
	g(79,y);
	p("@");
	delay (1000);
   }
   for(x=79; x>=2; x--)
   {
	g(x,23);
	p("@");
	delay(1000);
   }
   for (y=23 ; y>=2; y--)
   {	g(2,y);
	p("@");
	delay(1000);
   }
   for( x = 3; x <= 78; x++)
   {
	g(x,3);
	p ("@");
	delay (1000);
   }
   for (y=3; y <= 22; y++)
   {
	g(78,y);
	p("@");
	delay (1000);
   }
   for(x=78; x>=3; x--)
   {
	g(x,22);
	p("@");
	delay(1000);
   }
   for (y=22 ; y>=3; y--)
   {	g(3,y);
	p("@");
	delay(1000);
   }
   for( x = 4; x <= 77; x++)
   {
	g(x,4);
	p ("@");
	delay (1000);
   }
   for (y=4; y <= 21; y++)
   {
	g(77,y);
	p("@");
	delay (1000);
   }
   for(x=77; x>=4; x--)
   {
	g(x,21);
	p("@");
	delay(1000);
   }
   for (y=21 ; y>=4; y--)
   {	g(4,y);
	p("@");
	delay(1000);
   }
   for( x = 5; x <= 76; x++)
   {
	g(x,5);
	p ("@");
	delay (1000);
   }
   for (y=5; y <= 20; y++)
   {
	g(76,y);
	p("@");
	delay (1000);
   }
   for(x=76; x>=5; x--)
   {
	g(x,20);
	p("@");
	delay(1000);
   }
   for (y=20 ; y>=5; y--)
   {	g(5,y);
	p("@");
	delay(1000);
   }
   for( x = 6; x <= 75; x++)
   {
	g(x,6);
	p ("@");
	delay (1000);
   }
   for (y=6; y <= 19; y++)
   {
	g(75,y);
	p("@");
	delay (1000);
   }
   for(x=75; x>=6; x--)
   {
	g(x,19);
	p("@");
	delay(1000);
   }
   for (y=19 ; y>=6; y--)
   {	g(6,y);
	p("@");
	delay(1000);
   }
   for( x = 7; x <= 74; x++)
   {
	g(x,7);
	p ("@");
	delay (1000);
   }
   for (y=7; y <= 18; y++)
   {
	g(74,y);
	p("@");
	delay (1000);
   }
   for(x=74; x>=7; x--)
   {
	g(x,18);
	p("@");
	delay(1000);
   }
   for (y=18 ; y>=7; y--)
   {	g(7,y);
	p("@");
	delay(1000);
   }
   for( x = 8; x <= 73; x++)
   {
	g(x,8);
	p ("@");
	delay (1000);
   }
   for (y=8; y <= 17; y++)
   {
	g(73,y);
	p("@");
	delay (1000);
   }
   for(x=73; x>=8; x--)
   {
	g(x,17);
	p("@");
	delay(1000);
   }
   for (y=17 ; y>=8; y--)
   {	g(8,y);
	p("@");
	delay(1000);
   }
   for( x = 9; x <= 72; x++)
   {
	g(x,9);
	p ("@");
	delay (1000);
   }
   for (y=9; y <= 16; y++)
   {
	g(72,y);
	p("@");
	delay (1000);
   }
   for(x=72; x>=9; x--)
   {
	g(x,16);
	p("@");
	delay(1000);
   }
   for (y=16 ; y>=9; y--)
   {	g(9,y);
	p("@");
	delay(1000);
   }
   for( x = 10; x <= 71; x++)
   {
	g(x,10);
	p ("@");
	delay (1000);
   }
   for (y=10; y <= 15; y++)
   {
	g(71,y);
	p("@");
	delay (1000);
   }
   for(x=71; x>=10; x--)
   {
	g(x,15);
	p("@");
	delay(1000);
   }
   for (y=15 ; y>=10; y--)
   {	g(10,y);
	p("@");
	delay(1000);
   }
    for( x = 11; x <= 70; x++)
   {
	g(x,11);
	p ("@");
	delay (1000);
   }
   for (y=11; y <= 14; y++)
   {
	g(70,y);
	p("@");
	delay (1000);
   }
   for(x=70; x>=11; x--)
   {
	g(x,14);
	p("@");
	delay(1000);
   }
   for (y=14 ; y>=11; y--)
   {	g(11,y);
	p("@");
	delay(1000);
   }
    for( x = 12; x <= 69; x++)
   {
	g(x,12);
	p ("@");
	delay (1000);
   }
   for (y=12; y <= 13; y++)
   {
	g(69,y);
	p("@");
	delay (1000);
   }
   for(x=69; x>=12; x--)
   {
	g(x,13);
	p("@");
	delay(1000);
   }
   for (y=13 ; y>=12; y--)
   {	g(12,y);
	p("@");
	delay(1000);
   }
  getch();

}