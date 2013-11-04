#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define p printf
#define s scanf

// FUNCTIONS
void ticketdest();
void destination();
void dbase();
void menu();
void ticket();
void north();
void south();
void show();
void print();
void start();
void dsplysale();
void updtefre();

// VARIABLES
int i, x, y, to, fr, pass, dest, tick, choice, kmeter;
int place[20];
float fare, total;


 main()
    {
    start();
    getch();
    }
void start()
{
    p("\n\n\t\t\t= Cavite Bus Transit =");
    p("\n\n\n\tMenu");
    p("\n\n\t[ 1 ] Ticket Transaction");
    p("\n\n\t[ 2 ] One (1) Day Net Sales");
    p("\n\n\t[ 3 ] Fare Adjustments");
    p("\n\n\n\tChoice: ");
    s("%d", &x);
    if (x == 1) menu();
    
    else if (x == 2) dsplysale();
    
    else if (x == 3) updtefre();
    
    else 
    { p("\n\n\n\tINVALID CHOICE! Press any key to continue... "); getch(); system ("cls"); start();
 
    getch();}
}
    
void dsplysale()
{p("\n\n\tWALA PA!"); getch(); system("cls"); start(); }
void updtefre()
{p("\n\n\tWALA PA REN!"); getch(); system("cls"); start(); }

void menu()// NORTH AND SOUTH BOUND ROUTE
{
     system("cls");
     p("\n\n\n\t\t\t= Cavite Bus Transit =\n\n");
     p("\n\t\t\t Ticket Transaction\n ");
     p("\n\n\tChoose Destination: ");
     p("[ 1 ] NORTH BOUND          [ 2 ] SOUTH BOUND ");
     p("\n\n\tRoute: ");
     s("%d", &y);
     if (y == 1) north();
     else if ( y == 2) south();
     
     else  {p("INVALID CHOICE!"); getch(); system("cls"); menu(); getch(); }
     }


void ticketdest()
{
  p("\n\tEnter Destination"); 
  p("\n\t[ From ]: ");               
  s("%d",&fr);
  p("\n\t[ To ]: ");
  s("%d",&to);    
  p("\n\tNumber of Passengers: ");
  s("%d",&pass);
  if(to > fr) {  destination();
   p("\n\tFARE: %2.2f",fare);
   p("\n\tTotal Kilometer: %d\n", kmeter);
   p("\n\tPress Enter to proceed to SHOW SCREEN."); getch(); show();

  }
  if(to < fr)
  { system("cls"); destination(); south(); ticketdest(); getch(); }                         
}




  // NORTH ROUTE
void north()
     {

     system("cls");
  p("\n\tNORTH BOUND\n\n");
  
  p("\n\t[1] Imus         [8]  Taft       [15] Ortigas");
  p("\n\t[2] Sm Bacoor    [9]  Magallanes [16] Santolan");
  p("\n\t[3] Niog         [10] Ayala      [17] Araneta Cubao");
  p("\n\t[4] Talaba       [11] Buendia    [18] Kamuning");
  p("\n\t[5] Coastal Road [12] Guadalupe  [19] Quezon Ave");
  p("\n\t[6] Mia Road     [13] Boni Ave   [20] North Ave");
  p("\n\t[7] Baclaran     [14] Shaw\n");
   
  ticketdest();
  
  

}
// SOUTH ROUTE
void south()
{
     system("cls");
  p("\n\tSOUTH BOUND\n\n");
  
  p("\n\t[1] North Ave    [8]  Boni Ave   [15] Mia Road");
  p("\n\t[2] Quezon Ave   [9]  Guadalupe  [16] Coastal Road");
  p("\n\t[3] Kamuning     [10] Buendia    [17] Talaba");
  p("\n\t[4] Araneta Cubao[11] Ayala      [18] Niog");
  p("\n\t[5] Santolan     [12] Magallanes [19] Sm Bacoor");
  p("\n\t[6] Ortigas      [13] Taft       [20] Imus");
  p("\n\t[7] Shaw         [14] Baclaran");
  
  ticketdest();
 }


void show()
{
     system("cls");
     tick = tick+1;
     for(i=0;i<22;i++);
     
     
p("\n\t\t\tCAVITE BUS");
p("\n\t\t\tTRANSIT\n");
p("\n\t\tP %2.2f",fare);
p("\n\t\tTicket no.: %4.0f",tick);
p("\n\t\tPassengers: %d",pass);
p("\n\t\tThank you for ");
p("\n\t\triding!"); 
p("\n\t\tHappy Trip!");

         
 p("\n\n\n\n\t[ MENU ]");
 p("\n\t[1] Print");
 p("\n\t[2] Back to Menu");
 p("\n\tChoice:");
 s("%d",&choice);
 if(choice == 1) { print(); }
 if(choice == 2) { system("cls");start(); }
 
}

void print()
{  system("cls");start();  }

// ARRAYS
void destination()
{  
     
 place[1]=0; place[9]=8;   place[17]=16;
 place[2]=1; place[10]=9;  place[18]=17;
 place[3]=2; place[11]=10; place[19]=18;
 place[4]=3; place[12]=11; place[20]=19;
 place[5]=4; place[13]=12;
 place[6]=5; place[14]=13;
 place[7]=6; place[15]=14;
 place[8]=7; place[16]=15;

 kmeter=(to-fr);
  
 if(kmeter<=3) 
 
 { 
 fare = 15.00;
 }                       // from:1 to:2 = 7.50  wtff
 
 else if(kmeter>=4) 
 
 { 
 fare = ((kmeter*5.00)+15.00); 
 }
 
 else (pass>=2);
 {
 fare = (((kmeter*5.00)+15.00)*pass);
 }//ok
 
 
  
 
 
 dbase();
 
}

void dbase()
{
     
int ctr=1;
FILE *dbaseko;
FILE *count;
count=fopen("tempnum.txt","w");
dbaseko=fopen("kinita.txt","a+");
fprintf(count,"%d",&ctr);
fprintf(dbaseko,"%d %f",ctr,&fare);
fclose(count);
fclose(dbaseko);
}
