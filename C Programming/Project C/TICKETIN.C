#include<stdio.h>
#include<conio.h>


int i,j,choice;
int fach;
int route;
int destR,from,to;
int place[20];


stars()
{ for(i=0;i<75;i++) { textcolor(14);textbackground(1);printf("*"); } }

design()
{
 gotoxy(4,4);stars();
 for(i=0;i<18;i++) { gotoxy(4,5+i); printf("*\n"); }
 for(i=0;i<18;i++) { gotoxy(78,5+i);printf("*\n"); }

 gotoxy(4,23);stars();gotoxy(32,6);printf("CAVITE BUS TRANSIT");
}


ticket_trans()
{ clrscr();design();
  gotoxy(33,7);printf("[ TICKET TRANSACTION ]");
  gotoxy(8,9);printf("Choose Destination Route: [1] NORTH BOUND  [2] SOUTHBOUND");
  gotoxy(8,10); printf("Enter Destination: ");
  gotoxy(8,11);printf("From: ");gotoxy(25,11);printf("To: ");
  gotoxy(8,12);printf("Fare Total: ");

  gotoxy(29,10);scanf("%d",&destR);
		if (destR == 1) north();
		if (destR == 2) south();
  gotoxy(14,11);scanf("%d",&from);
  gotoxy(29,11);scanf("%d",&to);
}

place_dest()

{
 place[0] = 1;
 place[1] = 2;
 place[2] = 3;
 place[3] = 4;
 place[4] = 5;
 place[5] = 6;
 place[6] = 7;
 place[7] = 8;
 place[8] = 9;
 place[9] = 10;
 place[10]= 11;
 place[11]= 12;
 place[12]= 13;
 place[13]= 14;
 place[14]= 15;
 place[15]= 16;
 place[16]= 17;
 place[17]= 18;
 place[18]= 19;
 place[19]= 20;


 for(j=1;j<=7;j++)
   { gotoxy(8,13+j); printf("%s", place[j]); }
 for(j=1;j<=7;j++)
   { gotoxy(30,13+j);printf("%s", place[j]); }
 for(j=1;j<=7;j++)
   { gotoxy(50,13+j);printf("%s", place[j]); }

}

north()
{
  gotoxy(29,10);printf("NORTH BOUND");
  gotoxy(8,14);printf("[1] Imus");         gotoxy(30,14);printf("[8]  Taft");       gotoxy(50,14);printf("[15] Ortigas");
  gotoxy(8,15);printf("[2] Sm Bacoor");    gotoxy(30,15);printf("[9]  Magallanes"); gotoxy(50,15);printf("[16] Santolan");
  gotoxy(8,16);printf("[3] Niog");         gotoxy(30,16);printf("[10] Ayala");      gotoxy(50,16);printf("[17] Araneta Cubao");
  gotoxy(8,17);printf("[4] Talaba");       gotoxy(30,17);printf("[11] Buendia");    gotoxy(50,17);printf("[18] Kamuning");
  gotoxy(8,18);printf("[5] Coastal Road"); gotoxy(30,18);printf("[12] Guadalupe");  gotoxy(50,18);printf("[19] Quezon Ave");
  gotoxy(8,19);printf("[6] Mia Road");     gotoxy(30,19);printf("[13] Boni Ave");   gotoxy(50,19);printf("[20] North Ave");
  gotoxy(8,20);printf("[7] Baclaran");     gotoxy(30,20);printf("[14] Shaw");

}

south()
{
  gotoxy(29,10);printf("SOUTH BOUND");
  gotoxy(8,14);printf("[1] North Ave");     gotoxy(30,14);printf("[8]  Boni Ave");       gotoxy(50,14);printf("[15] Mia Road");
  gotoxy(8,15);printf("[2] Quezon Ave");    gotoxy(30,15);printf("[9]  Guadalupe");      gotoxy(50,15);printf("[16] Coastal Road");
  gotoxy(8,16);printf("[3] Kamuning");      gotoxy(30,16);printf("[10] Buendia");        gotoxy(50,16);printf("[17] Talaba");
  gotoxy(8,17);printf("[4] Araneta Cubao"); gotoxy(30,17);printf("[11] Ayala");          gotoxy(50,17);printf("[18] Niog");
  gotoxy(8,18);printf("[5] Santolan");      gotoxy(30,18);printf("[12] Magallanes");     gotoxy(50,18);printf("[19] Sm Bacoor");
  gotoxy(8,19);printf("[6] Ortigas");       gotoxy(30,19);printf("[13] Taft");           gotoxy(50,19);printf("[20] Imus");
  gotoxy(8,20);printf("[7] Shaw");          gotoxy(30,20);printf("[14] Baclaran");

}

net_sales()
{ clrscr();design();
}

adjust()
{ clrscr();design();
  gotoxy(30,7);printf("[ Fare Matrix Adjustment ]");
}

show()
{ clrscr();design();
  gotoxy(32,7);printf("[ Current Fare Matrix ]");
  gotoxy(8,10);printf("Route: [ 1] NORTH BOUND    [ 2 ] SOUTH BOUND");
  gotoxy(8,11);printf("Route: ");gotoxy(15,11);scanf("%d",&route);
  if (route == 1 ){ gotoxy(15,11); printf("NORTH BOUND"); }
  else if (route == 2) { gotoxy(15,11); printf("SOUTH BOUND"); }
  else { gotoxy(15,11);printf("Invalid Choice! Press [ ENTER ]"); }
  getch();fare_adjust();

}


fare_adjust()
{ clrscr();design();
  gotoxy(33,7);printf("[  Fare Adjustment  ]");
  gotoxy(8,8);printf("[ OPTIONS: ]");
  gotoxy(8,10);printf("[ 1 ] Show Current Fare Matrix");
  gotoxy(8,11);printf("[ 2 ] Adjust Fare Matrix");
  gotoxy(8,12);printf("[ 3 ] Back to Main Menu ");
  gotoxy(8,15);printf("Choice: ");
  gotoxy(16,15);scanf("%d", & fach);fachoice();

}



menu()
{
 clrscr();design();
 gotoxy(8,8);printf("[ MENU: ]");
 gotoxy(8,10);printf("[ 1 ] Ticket Transaction");
 gotoxy(8,11);printf("[ 2 ] One (1) Day Net Sales");
 gotoxy(8,12);printf("[ 3 ] Fare Adjustment ");

 gotoxy(8,15);printf("Choice: ");
 gotoxy(16,15);scanf("%d",&choice);

  if (choice == 1) ticket_trans();
  else if (choice == 2) net_sales();
  else if (choice == 3) fare_adjust();
  else { gotoxy(16,15);printf("Invalid Choice!");getch();menu(); }
}

fachoice()
{
  if (fach == 1) show();
  else if (fach == 2) adjust();
  else if (fach == 3) menu();
  else { gotoxy(16,15);printf("Invalid Choice!");fare_adjust(); }
}



main()
{
  menu();


getch();
return 0;
}