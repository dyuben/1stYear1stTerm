#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

void main ()
{
   int n, min, sec, mil;
   printf("c o u n t d o w n\n ");
   scanf("%d",&n);
   for(min=n-1;min>=0;min--)
   {
	for(sec=59;sec>=0;sec--)
	{
		for(mil=1000;mil>=0;mil--)

		{
			clrscr();
			printf("%d:%d;%d\n", min, sec, mil);
		}
	}

   }
   getch();

}