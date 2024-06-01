#include<iostream>
#include<windows.h>
#include<time.h>

using namespace std;
 
int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,1);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,2);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,3);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,4);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,5);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,6);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,7);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,8);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,9);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,10);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,11);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,12);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	SetConsoleTextAttribute(h,13);
	cout<<"Hello My Name is Ashim Gautam\n\n";
	
	time_t t;
	time(&t);
	
	cout<<"\nCurrent date and time :"<<ctime(&t);
	return 0;
}





















