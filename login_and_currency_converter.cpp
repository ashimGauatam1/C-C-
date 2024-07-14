#include<iostream>
#include<conio.h>
using namespace std;

void login();
void currency();
int main()
{
	login();
	currency();
	return 0;
}

void login(){
     string user_name,user_pass,c;
     login:
	cout<<"------------------------This is the login page----------------------------\n\n\n\n";
	cout<<"                  -----------------------------------------\n";
	cout<<"                  -                                       -\n";
	cout<<"                  -                User Name              -\n";
     cout<<"                  -                                       -\n";
	cout<<"                  -                                       -\n";
	cout<<"                  -                                       -\n";
	cout<<"                  -                Password               -\n";
	cout<<"                  -                                       -\n";
	cout<<"                  -                                       -\n";
	cout<<"                  -                                       -\n";
     cout<<"                  -----------------------------------------\n\n\n\n";	
	cout<<"------------------------------------------------------------------------\n\n\n";
	cout<<"                            Enter your user name\n";			
	cin>>user_name;
	cout<<"                            Enter your password\n";
	cin>>user_pass;
		if(user_name=="ashim" && user_pass=="pass")
		{
			cout<<"Your login is successful........\n";
			getch();
		}
		else{
			cout<<"Failed try again\n\n\n";	
		system("cls");
			goto login;	
		}
	system("cls");
}
void currency(){
	int ic,npr,ch;
	cout<<"------------------------CURRENCY CONVERTER----------------------------\n\n\n\n";
	cout<<"                  -----------------------------------------           \n";
	cout<<"                                MENU                                  \n\n";
	cout<<"                       1: Indian currency=1.6                         \n";
	cout<<"                       2: American currency=132.97                     \n";
	cout<<"                       3: Korean currency=0.09                         \n";
	cout<<"                       4: Canadian currency=97.95                      \n";
	cout<<"                  -----------------------------------------           \n";
	cout<<"Enter your amount in npr\n\n";
	cin>>npr;
	cout<<"Enter which currency to convert\\n\n\n";
	cout<<"1: Indian\n";
	cout<<"2: American\n";
	cout<<"3: Korean\n";
	cout<<"4: Canadian\n\n\n";
	cin>>ch;
	switch(ch)
	{
		case 1:{
			ic=npr*1.6;
	      	cout<<"In Indian currency is \n"<<ic<<"\n";
			break;
		}
		case 2:{
			ic=npr*132.97;
	      	cout<<"In american currency is\n "<<ic<<"\n";
			break;
		}
		case 3:{
			ic=npr*0.099;
	      	cout<<"In korean currency is\n "<<ic<<"\n";
			break;
		}
		case 4:{
			ic=npr*98.95;
	      	cout<<"In canadian currency is \n"<<ic<<"\n";
			break;
		}
	}
	
}