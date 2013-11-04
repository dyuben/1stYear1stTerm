#include <stdio.h>
#define p printf
#define s scanf
#define g gotoxy


char menu,m;
int a,b,c,i,n,t,u,v,w,x,y,z,skip,sec,min,max,mil;

main()
{
	una:
	clrscr();

	g(31,4);
	p("[A] Exercise 1");
	g(31,5);
	p("[B] Exercise 2");
	g(31,6);
	p("[C] Exercise 3");
	g(31,7);
	p("[D] Exercise 4");
	g(31,8);
	p("[E] Exercise 5");
	g(31,9);
	p("[F] Exercise 6");
	g(31,10);
	p("[G] Exercise 7");
	g(31,11);
	p("[H] Exercise 8");
	g(31,12);
	p("[I] Exercise 9");
	g(31,13);
	p("[J] Exercise 10");
	g(31,14);
	p("[K] Exercise 11");
	g(31,15);
	p("[X] Exit");
	g(20,18);
	p("Please input the letter of your choice: ");
	s("%s",&menu);

	switch(menu)
	{
		case 'a':
		case 'A':
			clrscr();

			for(i=0;i<5;i++)
			{
				p("August\n");
			}

			p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'b':
		case 'B':
			clrscr();

			p("Please input a number: ");
			s("%i",&n);

			for(i=0;i<n;i++)
			{
				p("number %i\n",i);
			}

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'c':
		case 'C':
			clrscr();

			p("Skip count by: ");
			s("%i",&skip);
			p("Maximum: ");
			s("%i",&max);

			for(i=0;i<=max;i=i+skip)
			{
				p("%i\n",i);
			}

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'd':
		case 'D':
			clrscr();

			for(a=0;a<3;a++)
			{
				for(b=0;b<4;b++)
				{
					p("sam\n");
				}
			}

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'e':
		case 'E':
			clrscr();

			for(a=0;a<3;a++)
			{
				for(b=0;b<4;b++)
				{
					p("%i%i\n",a,b);
				}
			}

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'f':
		case 'F':
			clrscr();

			g(31,4);
			p("C O U N T D O W N\n");
			g(32,5);
			p("input number: ");
			s("%i",&n);

			for(min=n-1;min>=0;min--)
			{
				for(sec=59;sec>=0;sec--)
				{
					for(mil=1000;mil>=0;mil--)
					{
						clrscr();
						p("%i:%i:%i",min,sec,mil);
					}
				}
			}

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'g':
		case 'G':
			clrscr();

			a=3;
			b=4;
			c=1;

			t=(b>a);
			u=(a==c);
			v=(a!=c);
			w=(c<=a);
			x=((b>a)||(b<3));
			y=((b>a)&&(b<3));
			z=((b>a)&&!(b<3));

			p("t is %i\n",t);
			p("u is %i\n",u);
			p("v is %i\n",v);
			p("w is %i\n",w);
			p("x is %i\n",x);
			p("y is %i\n",y);
			p("z is %i\n",z);

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'h':
		case 'H':
			clrscr();

			p("The new ADCS grading system\nPlease enter a grade: ");
			s("%i",&x);

			if(x>=95)
			{
				p("Grade is A");
			}
			else if(x>=85)
			{
				p("Grade is B");
			}
			else if(x>=75)
			{
				p("Grade is C");
			}
			else
			{
				p("FAILED!");
			}

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'i':
		case 'I':
			clrscr();

			p("Please input a number: ");
			s("%i",&x);

			if((x%2==0)&&(x%3==0))
			{
				p("Divisible by 2 and 3");
			}
			else if(x%2==0)
			{
				p("Divisible by 2");
			}
			else if(x%3==0)
			{
				p("Divisible by 3");
			}
			else
			{
				p("Not Divisible by 2 and 3");
			}

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'j':
		case 'J':
			clrscr();

			p("Please enter a number: ");
			s("%i",&x);

			switch(x)
			{
				case 0:	p("zero");
				break;

				case 1:	p("one");
				break;

				case 2:	p("two");
				break;

				case 3:	p("three");
				break;

				default: p("invalid input");
			}

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'k':
		case 'K':
			clrscr();

			p("Please enter 2 number: ");
			s("%i%i",&x,&y);

			switch(x+y)
			{
                        	case 0:	p("zero");
				break;

				case 1:	p("one");
				break;

				case 2:	p("two");
				break;

				case 3:	p("three");
				break;

				case 4: p("four");
				break;

				case 5: p("five");
				break;

				default: p("above FIVE");
			}

                        p("\nView another exercise [Y/N]? ");
			s("%s",&m);
			if(m == 'y' || m == 'Y')
			{
				goto una;

			}
			else
			{
				exit();
			}
		break;

		case 'x':
		case 'X':
			exit();
		break;

		default:
			g(32,20);
			p("Invalid input");



	}

getch();
}
