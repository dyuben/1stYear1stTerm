#include<stdio.h>
#define g gotoxy
#define p printf
#define s scanf

int month,day;

void main ()
{
   clrscr();
	g(20,12);
	p("Enter Date Of Birth: ");
	s("%i",&month);
	s("%i",&day);

   if(month==3 && day >=21 && day <=31 || month==4 && day >=1 && day<=20)
    {
     g(20,14);
     p("Aries - WAG KANG MAINGAY, may tulog!!");
    }
   else if(month==4 && day >=21 && day <=30 || month==5 && day >=1 && day<=21)
    {
     g(20,14);
     p("Taurus - Tumingin ka sa paligid mo, mali ang napasukan mo!!");
    }
   else if(month==5 && day >=22 && day <=31 || month==6 && day >=1 && day<=23)
    {
     g(20,14);
     p("Gemini - Wag kang magselos, ndi mo naman jowa yun!!");
    }
   else if(month==6 && day >=24 && day <=30 || month==7 && day >=1 && day<=23)
    {
     g(20,14);
     p("Cancer - no comment, alam mo na yun !!");
    }
    else if(month== 7 && day >=24 && day <=31 || month==8 && day >=1 && day<=23)
    {
     g(20,14);
     p("Leo - Wag masyadong mapanghinala, kasi ikaw yung kahinahinala!!");
    }
    else if(month==8 && day >=24 && day <=30 || month==9 && day >=1 && day<=23)
    {
     g(20,14);
     p("Virgo - Simple lng, BIGO KA!!");
    }
    else if(month==9 && day >=24 && day <=31 || month==10 && day >=1 && day<=22)
    {
     g(20,14);
     p("Libra - Wag masyadong galante, madaming aabang sau sa labas!!");
    }
     else if(month==10 && day >=23 && day <=30 || month==11 && day >=1 && day<=21)
    {
     g(20,14);
     p("Scorpio - Wag kang pasimple, huli ka sa akto!!");
    }
     else if(month==11 && day >=22 && day <=31 || month==12 && day >=1 && day<=21)
    {
     g(20,14);
     p("Saguittarius - Wag mainit ang ulo, tagay mo mo nlng yan!!");
    }
     else if(month==12 && day >=22 && day <=30 || month==01 && day >=1 && day<=20)
    {
     g(20,14);
     p("Capricorn ka, ok lng yan!!");
    }
     else if(month==01 && day >=21 && day <=31 || month==02 && day >=1 && day<=19)
    {
     g(20,14);
     p("Aquarius - Wag kang maadik sa tubig!!");
    }
     else if(month==02 && day >=20 && day <=29 || month==03 && day >=1 && day<=20)
    {
     g(8,14);
     p("Pieces - masyado kang mapagbigay kahit gamit mo sa bahay binibigay!!");
    }
    else
    {

     g(20,12);
     p("WRONG INPUT....TRY AGAIN!");
    }

  getch();

}