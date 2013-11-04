#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define NULL 0


int x,item;


struct Node{
	int Data;
	struct Node *Link;
	};

typedef struct Node *StackPointer;
StackPointer Top;

void push()
{

	StackPointer p;
	p = (StackPointer)malloc(sizeof(struct Node));
	p->Data = x;
	p->Link = Top;
	Top = p;
}


/*
void pop()
{	StackPointer Temp;
	if (Top == NULL) printf("Stack is empty.");
	else { item = Top->Data;
	       Temp = Top;
	       Top = Top->Link;
	       free(Temp);
	     }
}
*/

void main()
{


 int x[5]={10,20,30,40,50};
 int a;

 clrscr();
 Top = NULL;
 for(a=0;a<5;a++)
   { push(Top,x[a]);
     printf("%d  ",x[a]);

   }

/* while (Top!=NULL)
 { pop(Top, item);

   printf("%d",item);

*/

 getch();

}