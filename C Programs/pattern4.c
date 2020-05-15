#include<stdio.h>

void main()
{
	int n,i,j,k;

	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}

}
