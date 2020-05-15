#include<stdio.h>

struct Date
{
	int mm,dd,yy;

};

struct Student
{
	char name[20];
	int roll;
	int m1,m2,m3;
	struct Date d;
};

void main()
{

	struct Student s[10];
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\n\nEnter Data for Student %d :\n\n",i);
		
		printf("Enter Name: ");
		scanf("%s",s[i].name);

		printf("Enter Roll : ");
		scanf("%d",&s[i].roll);

		printf("Enter Date of Addmission(dd-mm-yy) : ");
		scanf("%d-%d-%d",&s[i].d.dd,&s[i].d.mm,&s[i].d.yy);
	
		printf("Enter Marks of Subject 1 : ");
		scanf("%d",&s[i].m1);
		printf("Enter Marks of Subject 2 : ");
		scanf("%d",&s[i].m2);
		printf("Enter Marks of Subject 3 : ");
		scanf("%d",&s[i].m3);

	}

	printf("\n\n*******************Student Details*****************\n\n");
	for(i=1;i<=5;i++)
	{
		printf("\n\nStudent %d : \n\n",i);
		printf("Name : %s\n",s[i].name);
		printf("Roll No : %d\n",s[i].roll);
		printf("Addmision Date : %d-%d-%d\n\n",s[i].d.dd,s[i].d.mm,s[i].d.yy);
	
		printf("Mark 1 : %d\n",s[i].m1);
		printf("Mark 2 : %d\n",s[i].m2);
		printf("Mark 3 : %d\n",s[i].m3);

	}

}
