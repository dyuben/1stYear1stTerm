#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define g gotoxy
#define p printf
#define s scanf

int i,x,dest,fr,to,rate,y,shch;
int place[20];
float fare;
double tick;

design()
{
 for(i=0;i<=75;i++) { g(2+i,2); p("*"); }
 for(i=0;i<=20;i++) { g(2,3+i); p("* \n"); }
 for(i=0;i<=20;i++) { g(77,3+i);p("* \n"); }
 for(i=0;i<=75;i++) { g(2+i,24);p("*"); }

 g(32,4);p("CAVITE BUS TRANSIT");
}

menu()
{
 clrscr();design();
 g(5,6);p("[ MENU ]");
 g(5,8);p("[1] Ticket Transaction");
 g(5,12);p("Choice:");
 g(13,12);s("%d",&x);
 if (x == 1) ticket();
 else {
    g(13,12);p("INVALID INPUT!.");
    getch();menu();
      }
}

ticket()
{ clrscr();design();
  g(30,5);p("[ TICKET TRANSACTION ]");
  g(5,7);p("CHOOSE ROUTE DESTINATION: [1] NORTH BOUND  [2] SOUTH BOUND");
  g(5,8);p("ROUTE:");g(12,8);s("%d",&dest);ticketop();
}

ticketdest()
{
  g(5,10);p("Enter Destination: [ From ] :               [ To ]: ");
  g(35,10);s("%d",&fr);g(57,10);s("%d",&to);
  if(to > fr)
  { destination();
    g(5,11);p("FARE: %2.2f",fare);g(18,11);p("Total Kilometer: %d",y);
    g(5,22);p("Press Enter to proceed to SHOW SCREEN.");getch();

  }
  if(to < fr)
  { ticketdest(); }
}

ticketop()
{
 if(dest == 1) { g(12,8);p("NORTH BOUND");north();ticketdest();show(); }
 else if(dest == 2) { g(12,8);p("SOUTH BOUND");south();ticketdest();show(); }
 else if(dest >=3)
 {
 g(12, 8); p("INVALID INPUT");
 }
 getch(); menu();

}

show()
{
 clrscr();
 tick = tick+1;
 for(i=0;i<22;i++) { g(5+i,5); p("_"); }
 for(i=0;i<22;i++) { g(5+i,20);p("_"); }
 for(i=0;i<15;i++) { g(5,6+i); p("*"); }
 for(i=0;i<15;i++) { g(26,6+i);p("*"); }
 g(10,6);p("CAVITE BUS");
 g(11,7);p("TRANSIT");

 g(8,10);p("p %2.2f",fare);
 g(8,14);p("Ticket no.: %4.0f",tick);

 g(8,16);p("Thank you for ");g(12,17);p("riding!"); g(9,18);p("Happy Trip!");

 if(dest == 1) {  g(9,8);p("NORTH BOUND"); }
 if(dest == 2) {  g(9,8);p("SOUTH BOUND"); }

 g(40,7);p("[ MENU ]");
 g(40,9);p("[1] Print");
 g(40,10);p("[2] Back to Menu");
 g(40,12);p("Choice:");g(48,12);s("%d",&shch);
 if(shch == 1) { print(); }
 if(shch == 2) { menu(); }
 else if (shch >= 3); g(48,12); p("INVALID INPUT"); getch();show();
}

print()
{

menu(); }

destination()
{
 place[1]=0; place[9]=8;   place[17]=16;
 place[2]=1; place[10]=9;  place[18]=17;
 place[3]=2; place[11]=10; place[19]=18;
 place[4]=3; place[12]=11; place[20]=19;
 place[5]=4; place[13]=12;
 place[6]=5; place[14]=13;
 place[7]=6; place[15]=14;
 place[8]=7; place[16]=15;

 y=(to-fr);
 if (y<=3) { fare = 11.00; }
 if (y>=3) { fare = ((y-3)*2.50)+11.00; }

}

north()
{

  g(29,10);p("NORTH BOUND");
  g(8,14);p("[1] Imus");         g(30,14);p("[8]  Taft");       g(50,14);p("[15] Ortigas");
  g(8,15);p("[2] Sm Bacoor");    g(30,15);p("[9]  Magallanes"); g(50,15);p("[16] Santolan");
  g(8,16);p("[3] Niog");         g(30,16);p("[10] Ayala");      g(50,16);p("[17] Araneta Cubao");
  g(8,17);p("[4] Talaba");       g(30,17);p("[11] Buendia");    g(50,17);p("[18] Kamuning");
  g(8,18);p("[5] Coastal Road"); g(30,18);p("[12] Guadalupe");  g(50,18);p("[19] Quezon Ave");
  g(8,19);p("[6] Mia Road");     g(30,19);p("[13] Boni Ave");   g(50,19);p("[20] North Ave");
  g(8,20);p("[7] Baclaran");     g(30,20);p("[14] Shaw");

}

south()
{
  g(29,10);p("SOUTH BOUND");
  g(8,14);p("[1] North Ave");     g(30,14);p("[8]  Boni Ave");       g(50,14);p("[15] Mia Road");
  g(8,15);p("[2] Quezon Ave");    g(30,15);p("[9]  Guadalupe");      g(50,15);p("[16] Coastal Road");
  g(8,16);p("[3] Kamuning");      g(30,16);p("[10] Buendia");        g(50,16);p("[17] Talaba");
  g(8,17);p("[4] Araneta Cubao"); g(30,17);p("[11] Ayala");          g(50,17);p("[18] Niog");
  g(8,18);p("[5] Santolan");      g(30,18);p("[12] Magallanes");     g(50,18);p("[19] Sm Bacoor");
  g(8,19);p("[6] Ortigas");       g(30,19);p("[13] Taft");           g(50,19);p("[20] Imus");
  g(8,20);p("[7] Shaw");          g(30,20);p("[14] Baclaran");

}



main()
{
 clrscr();
 tick=00010;
 menu();

 getch();
 return 0;
}