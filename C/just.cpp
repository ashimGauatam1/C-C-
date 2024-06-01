#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int i=0,c=' ',a=0;
	char uname[10],passw[10];
	char ashim[10]="ashim";
	char benzene[10]="benzene";
	do
	{
	system("cls");
	 printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s",&uname); 
	printf(" \n                       ENTER PASSWORD:-");
    scanf("%s",&passw);

    if(strcmp(uname,ashim)==0 && strcmp(passw,benzene)==0)
    {
    	printf("\n WELCOME LOGIN IS SUCCESSFULL!!!!\n");
	break;
	}
	else
	{
    	printf("\n LOGIN IS  NOT SUCCESSFULL!!!!1\n");
	}
	getch();
}
while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");	
getch();
}
