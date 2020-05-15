#include<stdio.h>

void main()
{
	int n,r,c,i,j;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=1;i<=8;i++)
	{
		printf("*");
	}
	printf("\n");
	for(i=2;i<5;i++)
	{
		printf("*");
		for(j=2;j<8;j++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
		
	}
	for(i=1;i<=8;i++)
	{
		printf("*");
	}
	printf("\n");

}