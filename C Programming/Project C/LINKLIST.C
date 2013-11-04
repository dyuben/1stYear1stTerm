#include<stdio.h>
#include<stdlib.h>



#define g gotoxy
#define p printf
#define s scanf


struct Node {
	int Data;
	struct Node *Link;
	};

typedef struct Node *NodePointer;


void InsertInFront(NodePointer &Head, int Number)
{
 NodePointer NewNode;
 NewNode = (NodePointer)malloc(sizeof(struct Node));
 NewNode->Data = Number;
 NewNode->Link = Head;
 Head = NewNode;

}

void DeleteFront(NodePointer &Head)
{
 NodePointer Temp;
 if (Head == NULL) p("Linked List is empty.. Cannot Delete");
 else
 {  Temp = Head;
    Head = Head->Link;
    free(Temp);
}

void main()
{
	NodePointer Head;


getch();

}