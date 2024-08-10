#include<iostream>
#include<conio.h>
#include<windows.h>
#include<time.h>

using namespace std;

void add();                          //FUNCTIONS
void subs();
void divide();
void multiply();
void multi_table();
void factorial();

int main()
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);   //Set color
	SetConsoleTextAttribute(h,7);
	int ch;
 	main_menu:
 	system("cls");
 	time_t t;                                       //set time
	time(&t);
	cout<<"\n\n\n                        Current Date and Time is :\n"<<"\t\t\t"<<ctime(&t);SetConsoleTextAttribute(h,12);
	cout<<"\n\n\n--------------------------ADVANCE CALCULATOR------------------------------\n\n";
	cout<<"--------------------------------------------------------------------------\n\n";
	cout<<"--------------------------MENU OPTIONS------------------------------\n\n";
	SetConsoleTextAttribute(h,6);
	cout<<"                       1: Addition\n";SetConsoleTextAttribute(h,1);
	cout<<"                       2: Substraction\n";SetConsoleTextAttribute(h,2);
	cout<<"                       3: Multiplications\n";SetConsoleTextAttribute(h,3);
	cout<<"                       4: Division\n";SetConsoleTextAttribute(h,4);
	cout<<"                       5: Multiplicaion Table\n";SetConsoleTextAttribute(h,5);
	cout<<"                       6: Factorial\n";SetConsoleTextAttribute(h,7);
	cout<<"                       7: EXIT\n\n\n";SetConsoleTextAttribute(h,8);
	cout<<"---------------------------------Ashim Guatam---------------------------------------\n\n";
	cout<<"                       Enter you choice to go ahead\n\n";SetConsoleTextAttribute(h,9);
	cout<<"\t\t\t\t";
	cin>>ch;
	cout<<"\n";

	switch(ch)
	{
		case 1:
			{
				add();
				getch();
				goto main_menu;
			}
					case 2:
			{
				subs();
				getch();
				goto main_menu;
			}
					case 3:
			{
				multiply();
				getch();
				goto main_menu;
			}
					case 4:
			{
				divide();
				getch();
				goto main_menu;
			}
					case 5:
			{
				multi_table();
				getch();
				goto main_menu;
			}
					case 6:
			{
				factorial();
				getch();
				goto main_menu;
			}
			case 7:
			{
				exit;
			}
			
	}
	return 0;
}

void add()
{
	int num1,num2,sum;
	cout<<"Enter first Number\n";
	cin>>num1;
	cout<<"Enter second Number\n";
	cin>>num2;
	sum=num1+num2;
	cout<<"sum =\t"<<sum<<"\n";
}

void subs()
{
	int num1,num2,sum;
	cout<<"Enter first Number\n";
	cin>>num1;
	cout<<"Enter second Number\n";
	cin>>num2;
	sum=num1-num2;
	cout<<"substraction =\t"<<sum<<"\n";
}

void multiply()
{
	int num1,num2,sum;
	cout<<"Enter first Number\n";
	cin>>num1;
	cout<<"Enter second Number\n";
	cin>>num2;
	sum=num1*num2;
	cout<<"multiplications =\t"<<sum<<"\n";
}

void divide()
{
	int num1,num2,sum;
	cout<<"Enter first Number\n";
	cin>>num1;
	cout<<"Enter second Number\n";
	cin>>num2;
	sum=num1/num2;
	cout<<"division =\t"<<sum<<"\n";
}

void multi_table()
{
	int num1;
	cout<<"Enter a Number\n";
	cin>>num1;
	for(int i=1;i<=10;i++)
	{
	cout<<num1<<"*"<<i<<"="<<num1*i<<"\n";
	}
}

void factorial()
{
	int num1,f=1;
	cout<<"Enter a Number\n";
	cin>>num1;
	for(int i=1;i<=num1;i++)
	{
	f=f*i;
	}
	cout<<"The factorial of "<<num1<<"is\t"<<f<<"\n";
}
