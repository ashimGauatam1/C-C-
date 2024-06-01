#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int ch=0;
	printf("\n\n\t\t\t\t\t ****Please enter your choice for menu****");
		printf("\n\n\n");
		printf(" \n\t\t\t\t\t\t Enter 1 ---> To Book a room");
		printf("\n\t\t\t\t\t\t------------------------------");
		printf(" \n\t\t\t\t\t\t Enter 2 ---> View Customer Record");
		printf("\n\t\t\t\t\t\t------------------------------------");
		printf(" \n\t\t\t\t\t\t Enter 3 ---> EXIT");
		printf("\n\t\t\t\t\t\t------------------------------");
		scanf("%d",&ch);
		FILE *p1,*p2;
		int i,s;
		struct customer
	{
		int rno;
		char name[20];
		char add[20];
		char na[20];
		int ph;
		char email[25];
		int nst;
		int time;
	}cu[100];
	//bool repeat=true;
	//while(repeat=true)
		switch(ch)
		{
			case 1:
				{
	p1=fopen("customer.txt","w");
	printf("Enter room number\n");
	scanf("%d",&cu[i].rno);
	printf("Enter customer name\n");
	scanf("%s",cu[i].name);
	printf("Enter Address\n");
	scanf("%s",cu[i].add);
	printf("Enter Nationality\n");
	scanf("%s",cu[i].na);
	printf("Enter Email\n");
	scanf("%s",cu[i].email);
	printf("Enter Phone number\n");
	scanf("%d",&cu[i].ph);
	printf("Enter Number days to stay\n");
	scanf("%d",&cu[i].nst);
	printf("Enter arrival date\n");
	scanf("%d",&cu[i].time);
	fwrite(&s,sizeof(s),1,p1);
	//fprintf(p1,"\n Room Number\t Name\t Address\t Nationality\t Email\t Phone number\t Number of days to stay\t Arrival date\n");
	//fprintf(p1,"%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t",cu[i].rno,cu[i].name,cu[i].add,cu[i].na,cu[i].email,cu[i].ph,cu[i].nst,cu[i].time);

	fclose(p1);
	break;
}
	case 2:
		{
			if((p2=fopen("customer.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");
	
	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,p1)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",cu[i].rno,cu[i].name,cu[i].add,cu[i].na,cu[i].email,cu[i].ph,cu[i].nst,cu[i].time);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(p2);
		   /*	p2=fopen("customer.txt","r");	
		   	printf("Enter room number\n");
	fscanf("%d",&cu[i].rno);
	printf("Enter customer name\n");
	fscanf("%s",cu[i].name);
	printf("Enter Address\n");
	fscanf("%s",cu[i].add);
	printf("Enter Nationality\n");
	fscanf("%s",cu[i].na);
	printf("Enter Email\n");
	fscanf("%s",cu[i].email);
	printf("Enter Phone number\n");
	fscanf("%d",&cu[i].ph);
	printf("Enter Number days to stay\n");
	fscanf("%d",&cu[i].nst);
	printf("Enter arrival date\n");
	fscanf(p1,"%d",&cu[i].time);*/
	printf("\n Room Number\t Name\t Address\t Nationality\t Email\t Phone number\t Number of days to stay\t Arrival date\n");
	printf("%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t",cu[i].rno,cu[i].name,cu[i].add,cu[i].na,cu[i].email,cu[i].ph,cu[i].nst,cu[i].time);
	fclose(p2);
		}
		case 3:
			{
			system("cls");
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
			}
}
getch();
}
