#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	char fName[20];
	char ch;

	printf("Enter a file name to create : ");
	scanf("%s",fName);
	
	fp = fopen(fName,"w");
	
	if(fp == NULL)
	{
		printf("File Cannot be Created\n");
		exit(0);
	}
	printf("File Created Successfully\n");

	//writing into file

	printf("Enter text to write into file(Press Enter to Quit and Save):\n");
	
	while((ch = getchar()))
	{
		if(ch != '\n')
		{
			fputc(ch,fp);
		}
		else
			break;
	
	}

	printf("Data Written Successfully\n");
	fclose(fp);

}
