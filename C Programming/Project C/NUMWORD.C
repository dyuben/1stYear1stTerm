#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

long num, ones, ties, tens, hund, thou, thouties, tensthou;

void main ()
{
   clrscr();
       p("Enter a number to convert into words: ");
       s("%li",&num);

       tensthou = num / 10000;
       thouties = num/ 10000;
       num = num % 10000;
       thou = num / 1000;

       num = num % 1000;
       hund = num / 100;
       num = num % 100;
       tens = num / 10;
       ties = num / 10;
       ones = num % 10;

       switch(tensthou)
       {
			case 2: p(" Twenty ");	break;
			case 3: p(" Thirty ");	break;
			case 4: p(" Fourty ");	break;
			case 5: p(" Fivety ");	break;
			case 6: p(" Sixty ");	break;
			case 7: p(" Seventy ");	break;
			case 8: p(" Eighty ");	break;
			case 9: p(" Ninety ");	break;

       }

       if (thouties == 1)
       {
       switch(thou)
       {
			case 0: p(" Ten thousand ");	break;
			case 1: p(" Eleven thousand ");	break;
			case 2: p(" Twelve thousand ");	break;
			case 3: p(" Thirteen thousand ");	break;
			case 4: p(" Fourteen thousand ");	break;
			case 5: p(" Fiveteen thousand ");	break;
			case 6: p(" Sixteen thousand ");	break;
			case 7: p(" Seventeen thousand ");	break;
			case 8: p(" Eighteen thousand ");	break;
			case 9: p(" Nineteen thousand ");	break;


       }
       }`
       switch(hund)
       {
			case 1: p(" One hundred ");	break;
			case 2: p(" Two hundred ");	break;
			case 3: p(" Three hundred ");	break;
			case 4: p(" Four hundred ");	break;
			case 5: p(" Five hundred ");	break;
			case 6: p(" Six hundred ");	break;
			case 7: p(" Seven hundred ");	break;
			case 8: p(" Eight hundred ");	break;
			case 9: p(" Nine hundred ");	break;

       }

       switch(tens)
       {
			case 2: p(" Twenty ");	break;
			case 3: p(" Thirty ");	break;
			case 4: p(" Fourty ");	break;
			case 5: p(" Fifty ");	break;
			case 6: p(" Sixty ");	break;
			case 7: p(" Seventy ");	break;
			case 8: p(" Eighty ");	break;
			case 9: p(" Ninety ");	break;

       }
       if(ties == 1)
       {
       switch(ties)
       {

			case 0: p(" Ten ");	break;
			case 1: p(" Eleven ");	break;
			case 2: p(" Twelve ");	break;
			case 3: p(" Thirteen ");	break;
			case 4: p(" Fourteen ");	break;
			case 5: p(" Fifteen ");	break;
			case 6: p(" Sixteen ");	break;
			case 7: p(" Seventeen ");	break;
			case 8: p(" Eighteen ");	break;
			case 9: p(" Nineteen ");	break;

       }
       }
       else
       switch(ones)
       {
			case 1: p(" One ");	break;
			case 2: p(" Two ");	break;
			case 3: p(" Three ");	break;
			case 4: p(" Four ");	break;
			case 5: p(" Five ");	break;
			case 6: p(" Six ");	break;
			case 7: p(" Seven ");	break;
			case 8: p(" Eight ");	break;
			case 9: p(" Ninet ");	break;

       }

  getch();

}