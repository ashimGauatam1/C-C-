#include<iostream>
#include<ctime>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main(){
	
int user_number,e=0;
char y;

srand(time(0));
again:
system("cls");
int random_number=rand() % 10 ;
cout<<"                         ---------------------Lets Guess a number---------------------\n\n";
cout<<"                                 Simple and easy game developed by Ashim-----------------------\n\n";
cout<<"                                    Enter a number from 0 to 10\n\n\n";
cout<<"\t\t\t\t\t\t";
cin>>user_number;
cout<<"\n\n\n";

/*if(random_number<user_number)
{
	cout<<"                  ------Opps Your guess is above the number----\n\n\n"<<"The  number is \t"<<random_number<<"\n";
}
else if(random_number>user_number)
{
	cout<<"                  ------Opps Your guess is below the number---------\n\n\n"<<"The  number is \t"<<random_number<<"\n";
}*/
if(random_number!=user_number)
{
	e=e+1;
	cout<<"                                                  TRY AGAIN\n\n\n\n";
	if(e<3){
		getch();
	goto again;
	}
	else if(e==3){
		cout<<"                        ********************* YOU LOSE**********************\n\n\n";
		cout<<"\t\t\t\t\t\tThe random number is "<<random_number<<"\n";
		exit ;
	}
}
else
{
	cout<<"                  -------Congratulations Your guess is correct and you are genuis------------\n\n\n";
}
cout<<"\n\n:::::::::::::::::::::::Do you want to play again press y and any other key to exit:::::::::::::::::\n";
cout<<"\t\t\t\t\t\t\t\t";
cin>>y; 
if(y=='y'){
	system("cls");
	goto again;
}
else{
	exit ;
}
return 0;
}