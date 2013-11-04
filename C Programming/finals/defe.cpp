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
void comp();
void menu();
void ticket();
void north();
void south();
void show();
void print();
void start();
void dsplysale();


// VARIABLES
int i, x, y, to, fr, pass, tick, choice, kmeter;
float t1,t2;
int place[20];
float fare, total,total2;


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
    p("\n\n\n\tChoice: ");
    s("%d", &x);
    if (x == 1) menu();
    
    else if (x == 2) dsplysale();
    
    else 
    { p("\n\n\n\tINVALID CHOICE! Press any key to continue... "); getch(); system ("cls"); start();
 
    getch();}
}
    
void dsplysale()
{ system("cls");
p("\n\tDAILY SALES"); 

comp();
getch(); system("cls"); start(); }

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
     
     else  {p("\n\tINVALID CHOICE!"); getch(); system("cls"); menu(); getch(); }
     
    
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
  { system("cls"); destination();south(); ticketdest(); getch(); }                         
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
  p("\n\t[7] Shaw         [14] Baclaran\n");
  
  ticketdest();
 }


void show()
{
     
     system("cls");
     tick = tick+1;
     for(i=0;i<22;i++);
     
     
p("\n\t\t\tCAVITE BUS\n\t\t\tTRANSIT\n");
p("\n\t\tP %.2f",fare);
p("\n\t\tTicket no.: %4.0f",tick);
p("\n\t\tPassengers: %d",pass);
p("\n\t\tThank you for ");
p("\n\t\triding!"); 
p("\n\t\tHappy Trip!");



          dbase();
 p("\n\n\n\n\t[ MENU ]");
 p("\n\t[1] Print");
 p("\n\t[2] Back to Menu");
 p("\n\tChoice:");
 s("%d",&choice);
 if(choice == 1) { print(); }
 else if(choice == 2) { system("cls");start(); }
 else (choice >=3 ); { p("\n\tINVALID CHOICE!"); getch(); system("cls"); show(); getch(); }
}

void print()
{  system("cls");start();  }


void destination()
{  
     

 kmeter=(to-fr);
  
 if(kmeter<=3) 
 
 { 
 fare = 15.00;
 }                       
 
 else if(kmeter>=4) 
 
 { 
 fare = (((kmeter*3.00)+15.00)*pass); 
 }
 
 else 
 {
 fare = (((kmeter*3.00)+15.00)*pass);
 }
 

}

void dbase()
{

FILE *dbase;
dbase=fopen("kinita.txt","a+");
fprintf(dbase,"%.2f\n\n",fare);

fclose(dbase);
}


void comp()
{
   FILE *dbaseko;  
   dbaseko=fopen("kinita.txt","a+");
   
   while(!feof(dbaseko))
   {
        fscanf(dbaseko,"%f",&total);                            
        printf("\n\t%.2f\n\n",total);                                                      
        total2=total2+total;
           
   }   
     
     p("\n\n\tTotal: %.2f",total2);
     fclose(dbaseko);             
}
