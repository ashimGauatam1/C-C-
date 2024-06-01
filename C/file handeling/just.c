#include<stdio.h>
#include<conio.h>
main()

{
	int i;
	FILE *p;
	p=fopen("student.txt","r");
	char fn[20],a[20];
	int roll;
//	printf("name\t address\t roll\n");
	for(i=0;i<2;i++)
	{
		fscanf(p,"%s%s%d",fn,a,&roll);
		printf("%s\t%s\t%d\n",fn,a,roll);
	}
	fclose(p);
	getch();
}