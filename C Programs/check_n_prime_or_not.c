#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i;
	printf("\nEnter n : ");
	scanf("%d",&n);

	for(i=2;i<=n/2;i++)
	{
		if(n  % i == 0)
		{
			printf("\nNot Prime number\n");
			exit(0);
		}
	}
	printf("Prime Number\n");

}
