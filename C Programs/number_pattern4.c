#include<stdio.h>

void main()
{
	int n,i,j,k,l,m=1;

	printf("Enter n : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",64+j);
		}

		for(k=1;k<=n-i;k++)
		{
			printf("  ");
			
		}

		for(l=i;l>=1;l--)
		{
			printf("%c",64+l);
		}
	
		printf("\n");
	}

}
