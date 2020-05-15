#include<stdio.h>

void main()
{
	int n,r,c,i,j;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}

}