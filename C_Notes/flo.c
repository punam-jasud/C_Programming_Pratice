#include<stdio.h>

void main()
{
	char n,i,j,k,m;

	printf("Enter Character : ");
	scanf("%c",&n);

	for(i='A',m='A';i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}

		for(j='A';j<=i;j++)
		{
			printf("%c ",m);
			m++;
		}
		printf("\n");
	}

}