#include<stdio.h>
#include<windows.h>
#include<time.h>
int main(){
	
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,9);
	printf("ASHIM GAUTAM\n\n\n\n\n");
	
	
	time_t t;
	time(&t);
	printf("The current time is :\n\n\n");
	printf(ctime(&t));
	return 0;
}