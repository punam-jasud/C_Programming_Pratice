#include<stdio.h>

void main()
{
	int n,i,j,k;

	printf("Enter n : ");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		for(k=n;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}


	for(i=n;i>=1;i--)
	{
		for(k=n;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

}
