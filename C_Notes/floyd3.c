#include<stdio.h>

void main()
{
	char n,i,j,k;

	printf("Enter Character : ");
	scanf("%c",&n);

	for(i='A';i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}

		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}

}