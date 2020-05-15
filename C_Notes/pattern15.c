#include<stdio.h>

void main()
{
	int n,r,c,i,j;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(c=1;c<i;c++)
		{
			printf("  ");
		}
		for(j=i;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

}