#include<stdio.h>

void main()
{
	int i,j;

	printf("*");
	for(i=2;i<=79;i++)
	{
		printf("=");
	}
	printf("*");
	printf("\n");
	for(i=2;i<=24;i++)
	{
		printf("=");
		for(j=2;j<=79;j++)
		{
			printf(" ");
		}
		printf("=");
		printf("\n");
	}

	printf("*");
	for(i=2;i<=79;i++)
	{
		printf("=");
	}
	printf("*");

	printf("\n");

}
