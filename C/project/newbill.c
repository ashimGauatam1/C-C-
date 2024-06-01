#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
main()
{
	struct CustomerDetails
{
	int roomnumber;
	char name[20];
	char address[25];
	int  phonenumber;
	char nationality[15];	
	char email[20];
	int  period;
	int  arrivaldate;
}s;

    printf("\n\n\n\n\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*      ------------------------------           *\n");
	printf("\t\t*        WELCOME TO BENZENE HOTEL               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*              Pokhara,Nepal                    *\n");
	printf("\t\t*      ------------------------------           *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*     CONTACT US:18-9864452384,9819198436       *\n");
	printf("\t\t*************************************************\n\n\n");
	printf("\nPress any key to visit next page.......");
	getch();
	while(1)
	{
	system("cls");
		printf("\n\t\t\t\t");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
    	printf("\n\n\t\t\t\t\t ****Please enter your choice for menu****");
		printf("\n\n\n");
		printf(" \n\t\t\t\t\t\t Enter 1 ---> To Book a room");
		printf("\n\t\t\t\t\t\t------------------------------");
		printf(" \n\t\t\t\t\t\t Enter 2 ---> View Customer Record");
		printf("\n\t\t\t\t\t\t------------------------------------");
		printf(" \n\t\t\t\t\t\t Enter 3 ---> Delete Customer Record");
		printf("\n\t\t\t\t\t\t-------------------------------------");
		printf(" \n\t\t\t\t\t\t Enter 4 ---> Search Customer Record");
		printf("\n\t\t\t\t\t\t-------------------------------------");
		printf(" \n\t\t\t\t\t\t Enter 5 ---> Edit Record");
		printf("\n\t\t\t\t\t\t--------------------------");
		printf(" \n\t\t\t\t\t\t Enter 6 ---> Bill And payments");
		printf("\n\t\t\t\t\t\t--------------------------");
		printf(" \n\t\t\t\t\t\t Enter 7 ---> Exit");
		printf("\n\t\t\t\t\t\t-------------------");
		printf("\n");
		int ch=0;
		printf("\n Enter your choice\n");
		scanf("%d",&ch);
		//ch=getche();
		getch();
		system("cls");
		switch(ch)
		{
		case 1:
			{
				system("cls");
				FILE *p1;
				//p1=fopen("add.txt","a+");
				p1=fopen("customer record.txt","w");
				printf("\n\t\t\t\t*************PLEASE ENTER CORRECT CUSTOMER DETAIL*************");
				printf("\n Enter Room Number\n");
				scanf("%d",&s.roomnumber);
				printf("\n Enter Name\n");
				scanf("%s",s.name);
				printf("\n Enter Address\n");
				scanf("%s",s.address);
				printf("\n Enter Nationality\n");
				scanf("%s",s.nationality);
				printf("\n Enter Email\n");
				scanf("%s",s.email);
				printf("\n Enter Time Period To stay\n");
				scanf("%d",&s.period);
				printf("\n Enter Phone Number\n");
				scanf("%d",&s.phonenumber);
				printf("\n Enter Aarrival Date\n");
				scanf("%d",&s.arrivaldate);
//				fflush(stdin);
				fprintf(p1,"\n Room Number\t Name\t Address\t Nationality\t Email\t Period to stay\t Phone\t Arrival Date\t");
				fprintf(p1,"\n%d \t%s \t\t%s \t\t%s \t%s  \t%d  \t     %d  \t  %d",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
				printf("\n\n Room is sucessfully booked\n");
				printf("\n Enter Esc to return to main menu and any key to book another room\n");
		        fclose(p1);
				getch();
				break;
			}
				{
					FILE *p2;
					p2=fopen("customer record.txt","r");
					printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");
	
	{
		/*printf("ROOMNUMBER :\t%d\n",s.roomnumber);
		printf("NAME:\t%s\n",s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%d\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%d \t%s \t\t%s \t\t%d \t%s  \t%d  \t     %d  \t  %d",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	getch();
	break;
				}
			case 6:
			{	
			system("cls");
				int i,n,total=0;
	            char name[20],add[20];
	struct bill
	{
	   char n[20];
	   int q;
	   int p;
	}b[100];
	printf("\n Enter customer name\n");
	scanf("%s",name);
	printf("\n Enter Address\n");
	scanf("%s",add);
	printf("\n Enter How many items you eat\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Name of items Quantity and price\n");
		scanf("%s%d%d",b[i].n,&b[i].q,&b[i].p);
	}
	printf("\n\n\n\t\t 	BENZENE HOTEL AND RESTAURANT\n\t");
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
	break;
	}
	case 7:
		{
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
			//	Sleep(2000);
				exit(0);
				break;
		}
	}
}
	getch();
}

	