#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	char name1[20],name2[20];
	printf("\n Enter your name\n");
	scanf("%s",&name1);
	printf("\n Enter your girl name\n");
	scanf("%s",&name2);
	for(i=0;i<50;i++)
	{
		printf("\n %s LOVES %s!!!!!!\n",name1,name2);	
	}
	
	for(i=0;i<50;i++)
	{
		printf("\n I LOVE YOU %s!!!!!!\n",name2);	
	}
	getch();
}