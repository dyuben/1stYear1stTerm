#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf

int i,x,fr,to,rate,y,shch;
char dest;
char z;
int menu();
void ticketop();
void ticket();
int destination();
int ticketdest();
int show();
int print();
void north();
void south();

int main()
{


int place[20];
float fare;
double tick;

     
    p("\n\n\n\t\t\t\t*CAVITE BUS TRANSIT*");
    p("\n\n\n\t\t[ MENU ]\n\n\n");
    p("\t\t[ 1 ] Ticket Transaction\n");
    
    p("\n\n\t\tChoice:");
    s("%d", &x);
    if (x==1)
    {menu();}
   

getch();
return 0;
}
  
   int menu()
    {
    system("cls");
    p("\n\n\n\t\t\t\t*CAVITE BUS TRANSIT*");
    p("\n\n\n\t\t[ MENU ]\n\n\n");
    p("\t\t[ 1 ] Ticket Transaction\n");
    p("\n\n\t\tChoice:");
    s("%s", &z);
    if (z == 1) ticket();
    else if (z == 2);
    else {
    p("INVALID CHOICE!PRESS ENTER TO CHOOSE ANOTHER SELECTION.");}
}
 void ticket()
 {
     system("cls");
 
 p("[ TICKET TRANSACTION ]");
 p("CHOOSE ROUTE DESTINATION: [1] NORTH BOUND  [2] SOUTH BOUND");
 p("ROUTE:");
 s("%d",&dest);
 ticketop();
 getch();
 
}

{ticketop(ticketop)};
{
 if(dest == 1) {p("NORTH BOUND");north();ticketdest();show(); }
 else if(dest == 2) { p("SOUTH BOUND");south();ticketdest();show(); }
 else ticket();
}

south()
{
  p("SOUTH BOUND");
  p("[1] North Ave");     p("[8]  Boni Ave");       p("[15] Mia Road");
  p("[2] Quezon Ave");    p("[9]  Guadalupe");      p("[16] Coastal Road");
  p("[3] Kamuning");      p("[10] Buendia");        p("[17] Talaba");
  p("[4] Araneta Cubao"); p("[11] Ayala");          p("[18] Niog");
  p("[5] Santolan");      p("[12] Magallanes");     p("[19] Sm Bacoor");
  p("[6] Ortigas");       p("[13] Taft");           p("[20] Imus");
  p("[7] Shaw");          p("[14] Baclaran");
}
     
     
     ticketdest()
{
  p("Enter Destination: [ From ] :               [ To ]: ");
  s("%d",&fr);          s("%d",&to);
  if(to > fr)
  { destination();
    p("FARE: %2.2f",fare);          p("Total Kilometer: %d",y);
    p("Press Enter to proceed to SHOW SCREEN.");       
    getch();
  }
  if(to < fr)
  { ticketdest(); }
  
  
  
   
   
                  
                     
                    
                  
                    
                
 
                    		            
                    
                
                                        
                    

}
