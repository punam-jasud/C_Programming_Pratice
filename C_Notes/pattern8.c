#include<stdio.h>

void main()
{
	int n,r,c,i,j;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

}