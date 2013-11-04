#include<stdio.h>
#include<conio.h>

#define g gotoxy
#define p printf
#define s scanf


int x,y,z;
int newnum,num,sum,fact;

compute()
{
g(5,5+x);p("Enter a Number: ");
g(21,5+x);s("%d",&num);


if(num%2 == 0)  { newnum=0;
		  while(num>0)
		  { newnum=newnum+num;
		    num=num-1;
		  }
		  g(5,6+x);x=x+2;
		  p("The Sum of the number is: %d",newnum);
		  compute();
		}
else
 if((num%2 == 1) && (num<=7))
		  { newnum=1;
		  while(num>0)
		  { newnum=newnum*num;
		    num=num-1;
		  }
		  g(5,6+x);x=x+2;
		  p("The Factorial of the number is: %d",newnum);
		  compute();
		}
else { g(5,6+x);p("Invalid Input. Press Enter to Exit."); }

}

main()
{
clrscr();
x=0;
compute();

getch();
return 0;
}