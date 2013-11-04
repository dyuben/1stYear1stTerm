#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


#define g gotoxy
#define p printf
#define s scanf
#define NULL 0

int z;
char choice;


struct Node{
	int Data;
	struct Node *Link;
	};

typedef struct Node *StackPointer;


menu()
{
 StackPointer Top;

 for(z=0;z<=60;z++) { g(8+z,3);p("*"); }
 g(25,5);p("STACK MENU (LINKED-LIST IMPLEMENTATION)");
 for(z=0;z<=60;z++) { g(8+z,7);p("*"); }
 g(15,9); p("[ A ] -  Push Stack");
 g(15,10); p("[ B ] -  Pop Stack");
 g(15,11);p("[ D ] -  Display Stack Content");
 g(15,12);p("[ X ] -  Exit");
 for(z=0;z<=60;z++) { g(8+z,14);p("*"); }
 g(15,16);p("Please Enter a Selection: [   ]");
 for(z=0;z<=60;z++) { g(8+z,18);p("*"); }
 g(43,16);s("%c",&choice);

 if(choice == ('A') || choice == ('a'))
  { g(5,20);p("Please Enter the number of the element to be pushed to the stack: ");
   push_stack(); }
 else if(choice == ('B') || choice == ('b'))
   pop_stack();
      else if(choice == ('D') || choice == ('d')) display();
	   else if(choice == ('X') || choice == ('x')) { clrscr();}
		else { clrscr(); menu();   }

}

push_stack(StackPointer &Top,int x)
{
 StackPointer i;

 g(79,20);(s"%d",&i);
 i = (StackPointer)malloc(sizeof(struct Node));
 i->Data = x;
 i->Link = Top;
 Top = i;

}

pop_stack()
{

}

display()
{


}




main()
{
StackPointer Top;
int x[5];
int item,a;

clrscr();

menu();

  Top = NULL;
  for (a=0;a<5;a++)
      push(Top,x[a]);

  while (Top!=NULL)
  {  pop(Top, item);
     p("%d",item);
  }



return 0;
}
