#include<stdio.h>

void main()
{
	int i,j;

	for(i=1;i<=80;i++)
	{
		printf("*");
	}
	printf("\n");
	for(i=2;i<=23;i++)
	{
		printf("*");
		for(j=2;j<=79;j++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}

	for(i=1;i<=80;i++)
	{
		printf("*");
	}

}
