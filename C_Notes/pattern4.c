#include<stdio.h>

void main()
{
	int n,r,c,i,j,k;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf("  ");
		}

		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}

}