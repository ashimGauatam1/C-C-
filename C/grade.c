#include<stdio.h>
#include<conio.h>
main()
{
	int ch=0;
	while(1)
	{
	printf("\n-------------------------------\n");
	printf("\n        MAIN MENU              \n");
	printf("\n Enter 1--> Addition");
	printf("\n Enter 2--> Muntiply\n");
	printf("\n-------------------------------\n");
	printf("\n Enter your choice :\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				int a,b;
				printf("\n Enter two numbers\n");
				scanf("%d%d",&a,&b);
				printf("\n The sum of two number is %d:\n",a+b);
				break;
			}
		case 2:
			{
				int a,b;
				printf("\n Enter two numbers\n");
				scanf("%d%d",&a,&b);
				printf("\n The sum of two number is : %d\n",a*b);
				break;
			}	
	}
}
	getch();
}