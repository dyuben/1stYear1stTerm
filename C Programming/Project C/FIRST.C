#include<stdio.h> /* header file */

int Num;  /* integer datatype */
float Mc; /* floating number */
char Letter; /* character datatype */

void main() /* function main */
{
   clrscr(); /* clear screen */
   Num=1234;    /* initializes a value for Num */
   Mc=1.5;
   Letter='G';

   printf("The values are: %i %.2f %c",Num,Mc,Letter);
		/* output the values contained using the
		type identifiers and type modifiers */

   getch();  /* get a character */
}