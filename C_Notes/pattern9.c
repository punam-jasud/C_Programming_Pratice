#include<stdio.h>

void main()
{
	int n,r,c,i,j;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=5;i>=1;i--)
	{
		for(c=1;c<=n-i;c++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

}