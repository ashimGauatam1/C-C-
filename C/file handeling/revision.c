#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	int i,n;
	struct student
	{
		int roll;
		char fn[20];
		char a[20];
	}s[2];
	fp=fopen("student.txt","w+");
	for(i=0;i<2;i++)
	{
	printf("Enter  Roll no  name address \n ");
	
		scanf("%d%s%s",&s[i].roll,s[i].fn,s[i].a);
	}
	
	fprintf(fp," Roll no\t name\t Address\n");
	for(i=0;i<2;i++)
	{
		fprintf(fp,"\n%d\t%s\t%s",s[i].roll,s[i].fn,s[i].a);
	}
	fclose(fp);
	rewind(fp);
	for(i=0;i<2;i++)
	{
		fscanf(fp,"%d%s%s",&s[i].roll,s[i].fn,s[i].a);
		if(s[i].roll==5)
		{
			printf("\n%d\t%s\t%s",s[i].roll,s[i].fn,s[i].a);
		}
	}
	getch();
}
