#include<stdio.h>

struct Employee
{
	char name[20];
	int id;
	long phone;
};

void main()
{
	struct Employee e;
	printf("Enter Employee Name: ");
	scanf("%s",e.name);

	printf("Enter Employee ID: ");
	scanf("%d",&e.id);

	printf("Enter Mobile Number: ");
	scanf("%ld",&e.phone);

	printf("Employee Details:\n\n");
	
	printf("Name : %s\n",e.name);
	printf("ID : %d\n",e.id);
	printf("Phone : %ld\n",e.phone);		

}
