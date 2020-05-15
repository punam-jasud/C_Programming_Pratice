#include<stdio.h>

void printName(char *name , int count)
{
	printf("%d : %s\n",count,name);
	count++;
	if(count <= 5)
		printName(name,count);

}

void main()
{

	char name[50];
	printf("Enter Name : ");
	scanf("%s",name);
	printName(name,1);

}
