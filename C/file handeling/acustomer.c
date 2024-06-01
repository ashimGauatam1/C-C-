#include<stdio.h>
#include<conio.h>
main()
{
	FILE *p;
	int i,n;
	struct customer
	{
		int rn;
		char name[30];
		char add[20];
		double ph;
		char na[20];
		char e[20];
		int nd;
	}c[1];
	p=fopen("customer.txt","w");
	printf("\n Enter Room number\n");
	scanf("%d",&c[i].rn);
	printf("\n Enter Name\n");
	scanf("%s",c[i].name);
	printf("\n Enter Address\n");
	scanf("%s",c[i].add);
	printf("\n Enter Phone number\n");
	scanf("%d",&c[i].ph);
	printf("\n Enter Nationality\n");
	scanf("%s",c[i].na);
	printf("\n Enter Email\n");
	scanf("%s",c[i].e);
	printf("\n Enter No of days\n");
	scanf("%d",&c[i].nd);
	fprintf(p,"\n Room\t Name\t Address\t Phone number\t Nationality\t Email\t No of days\n");
	fprintf(p,"\n %d\t%s\t%s\t%d\t%s\t%s\t%d",c[i].rn,c[i].name,c[i].add,c[i].ph,c[i].na,c[i].e,c[i].nd);
	getch();
	fclose(p);
}