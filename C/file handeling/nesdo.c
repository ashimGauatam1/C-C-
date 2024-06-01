#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void login()
{
	
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	system("cls");
	
    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword); 
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");
	
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");	
}
struct CustomerDetails   
{
	char ficialyear[10];
	char branchname[20];
	char auditdate[25];
	char lastdate[15];
	char filling[15];	
	char name[20];
	char remark[10];
}s;
/*void main()
{

    char username[15]; 
    char password[12]; 
 
    printf("\n\t  **************************  LOGIN FORM  **************************  ");
    printf(" \n\n\t                       ENTER USERNAME:-");
	scanf("%s",&username); 
    printf(" \n\t                       ENTER PASSWORD:-");
    scanf("%s",&password); 
 
    if(strcmp(username,"ashim")==0){ 
        if(strcmp(password,"ashim")==0){ 
 
        printf("\nWelcome!!! Login Success!"); 
        }else{ 
    printf("\nwrong password"); 
} 
    }else{ 
    printf("\nUser doesn't exist"); 
}
 getch();
 system("cls");}
 */
 int main()
 {
 int ch=0;
 printf("   ******************************  |AUDIT|  ***************************** \n");
 	printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -> AUDIT ENTRY");
		printf("\n------------------------");
		printf(" \n Enter 2 -> VIEW DETAILS");
		printf("\n----------------------------------");	
		printf(" \n Enter 3 -> AUDIT REPORT");
		printf("\n----------------------------------\n");	
		scanf("%d",&ch);
		system("cls");
		switch(ch)
		{
			case 1:
				{
					printf("\n\n   ******************************  |AUDIT ENTRY|  ***************************** \n");
					FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter information:");
		printf("\n**************************");
		printf("\n Enter Ficial year (yyyy\\mm\\dd):\n");
		scanf("\n%s",&s.ficialyear);
		fflush(stdin);
		printf("Enter Branch Name:\n");
		scanf("%s",s.branchname);
		printf("Enter Branch Audit Date (yyyy\\mm\\dd) :\n");
		scanf("%s",&s.auditdate);
		printf("Enter Last Date of Audit (yyyy\\mm\\dd):\n");
		scanf("%s",&s.lastdate);
		printf("Enter Filling Amount:\n");
		scanf("%s",s.filling);
		printf("Enter Paid Person Name:\n");
		scanf(" %s",s.name);
		printf("Enter Remark\n");
		scanf("%s",s.remark);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Data is successfully Saved!!");
		printf("\n Press esc key to exit,  any other key to add another data:");
		test=getche();
		if(test==27)
	fclose(f);
		getch();
			break;

}
}
      case 2:
      	{
      		FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("Ficial year    ");
	printf("Branch name\t ");
	printf("\tBranch audit date ");
	printf("\tLast date of audit ");
	printf("\tFilling Amount ");
	printf("\tPaid person name ");
	printf("\tRemark ");
	printf("\n");
	for(i=0;i<150;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t\t\t%s  \t\t%s  \t\t%s",s.ficialyear, s.branchname , s.auditdate , s.lastdate ,s.filling ,s.name,s.remark);
	}
	printf("\n");
	for(i=0;i<150;i++)
		printf("-");
	fclose(f);
	getch();
	break ;
}
     case 3:
     	{
system("cls");
	FILE *f;
	char ficialyear[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter ficial year: \n");
	scanf("%s", ficialyear);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.ficialyear,ficialyear)==0 ){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nFicial Year:\t%s",s.ficialyear);
			printf("\nBranch Name:\t%s",s.branchname);
			printf("\nAudit date:\t%s",s.auditdate);
			printf("\nLast date of audit:\t%s",s.lastdate);
			printf("\nFilling Amount:\t%s",s.filling);
			printf("\nPaid person name:\t%s",s.name);
			printf("\nRemarks :\t%s",s.remark);
			flag=0;
			getch();
			break;
		}
	}
	if(flag==1){	
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(f);
}

		 }
getch(); 
}