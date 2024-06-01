#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	int i,n,total=0;
	char name[20],add[20];
	struct bill
	{
	   char n[20];
	   int q;
	   int p;
	}b[100];
	printf("\n Enter customer name\n");
	gets(name);
	printf("\n Enter Address\n");
	gets(add);
	printf("\n Enter How many items you eat\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Name of items Quantity and price\n");
		scanf("%s%d%d",b[i].n,&b[i].q,&b[i].p);
	}
	printf("\n\n\n\t\t ASHIM HOTEL AND RESTAURANT\n\t");
	printf("\n\t\t\tPokhara,Nepal\n");
	printf("\n\t\tfresh and tasty food are available\n");
	printf("\n -------------------------------------------");
	printf("\n -------------------------------------------\n");
	printf("\nCustomer Name : %s",name);
	printf("\nAddress : %s",add);
	printf("\n -------------------------------------------\n");
	printf("\n\nName of items\t Quantity\t Price\n");
	for(i=0;i<n;i++)
	{
		printf("\n %s\t\t\t%d\t\t%d",b[i].n,b[i].q,b[i].p*b[i].q);
	}
	
	printf("\n -------------------------------------------");
	printf("\n -------------------------------------------\n");
	printf("\n Grand Total is :-");
	for(i=0;i<n;i++)
	{
		total=total+b[i].p*b[i].q;
	}
	printf("\t\t\t%d",total);
	
	printf("\n -------------------------------------------");
	printf("\n -------------------------------------------\n");
	printf("\n\t\tThank You\n");
	printf("\n\t\t\t Please visit Next time also...\n");
	printf("\n\t\t\t\t Phone Number- 9864452384");
	getch();
}