#include<stdio.h>

void main()
{
	int n,r,c,i,j;
	printf("Enter number : ");
	scanf("%d",&n);


	for(i=n;i>=1;i--)
	{
		for(c=1;c<i;c++)
		{
			printf("  ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

}