#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf



void main ()
{
  char bet1, bet2, result;

  clrscr();

  g(28,4);
  p("Rock, Paper, Scissors");
  g(35,6);
  p("[R] Rock");
  g(35,7);
  p("[P] Paper");
  g(35,8);
  p("[S] Scissors");
  g(32,10);
  p("Choose your bet: ");
  s("%s",&bet1);

  if(bet1 == 'R' || bet1 == 'r')
    {
      bet2 = 'P';
      g(32,12);
      p("Computer's bet: %c", bet2);
      g(35,14);
      p(" HAHAH!!! You Lose!!");
    }
    else if(bet1 == 'P' || bet1 == 'p')
    {
      bet2 = 'S';
      g(32,12);
      p("Computer's bet; %c", bet2);
      g(35,13);
      p("HAHAHA!!! You Lose!!!");
    }
    else if(bet1 == 'S' || bet1 == 's')
    {
      bet2 = 'R';
      g(32,12);
      p("Computer's bet; %c", bet2);
      g(35,13);
      p("HAHAHA!!! You Lose!!!");
    }



  getch();

}