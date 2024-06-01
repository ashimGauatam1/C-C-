#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	FILE *fp;
	struct student
	{
		char name[20];
		char add[20];
		int age;
	}std[100];
	printf("\n ENTER HOW MANY STUDENTS\n");
	scanf("%d",&n);
	fp=fopen("hello.txt","w");
	for(i=0;i<n;i++)
	{
		printf("\n Enter Name Address and age\n");
		scanf("%s%s%d",std[i].name,std[i].add,&std[i].age);
		fprintf(fp,"%s\t%s\t%d\n",std[i].name,std[i].add,std[i].age);
	}
	fclose(fp);
	getch();
}