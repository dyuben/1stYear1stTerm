#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


#define g gotoxy
#define p printf
#define s scanf
#define NULL 0

int z,item;
int x[5];
char choice;


struct Node{
	int Data;
	struct Node *Link;
	};

typedef struct Node *StackPointer;

StackPointer Top;


menu()
{
 for(z=0;z<=60;z++) { g(8+z,1);p("*"); }
 g(25,2);p("STACK MENU (ARRAY IMPLEMENTATION)");
 for(z=0;z<=60;z++) { g(8+z,3);p("*"); }
 g(15,5); p("[ A ] -  Push Stack");
 g(15,6); p("[ B ] -  Pop Stack");
 g(15,7);p("[ D ] -  Display Stack Content");
 g(15,8);p("[ X ] -  Exit");
 for(z=0;z<=60;z++) { g(8+z,10);p("*"); }
 g(15,11);p("Please Enter a Selection: [   ]");
 for(z=0;z<=60;z++) { g(8+z,12);p("*"); }
 g(43,11);s("%c",&choice);

  if(choice == ('A') || choice == ('a'))
  { g(5,14);p("Please enter the number of element to be pushed in the stack:");
    g(68,14);s("%d",&x);
    push_stack();
  }
 else if(choice == ('B') || choice == ('b'))
  {  if(Top == NULL)
	  { g(15,14);p("STACK IS EMPTY!");
	    g(15,16);p("Press Any Key to Enter Another Selection.");
	    getch();menu();
	  }
      else { g(5,20);p("POP the Stack!");
	     getch();
	   }

  }
      else if(choice == ('D') || choice == ('d')) display();
	   else if(choice == ('X') || choice == ('x')) { clrscr();}
		else { clrscr(); menu();   }

}

push_stack()
{

 /* StackPointer i;

 i = (StackPointer)malloc(sizeof(struct Node));
 i->Data = x;
 i->Link = Top;
 Top = i;  */


 g(15,16);p("[ CONTENTS OF STACK ]");
 for(z=0;z<=4;z++)
   {
     g(15,18+z);p("Number at Location Stack [ %d ] = %d",z,x[z]);

   }
 g(5,24);p("Press Any Key to enter another selection.");
 getch();menu();
}

pop_stack()
{

}

display()
{
 int a;

 g(15,14);p("[ CONTENTS OF STACK ]");
 for(a=0;a<=4;a++)
 { g(15,16+a);p("Number at Location Stack [ %d ] = %d",a,x[a]); }
 g(15,23);p("Press Any Key to Enter another selection.");
 getch();
 menu();
}




main()
{

 int x[5];

clrscr();

 Top=NULL;

 menu();

/*
for (a=0;a<5;a++)
      push_stack(Top,x[a]);

  while (Top!=NULL)
  {  pop_stack(Top, item);
     p("%d",item);
  }


*/
getch();

}
