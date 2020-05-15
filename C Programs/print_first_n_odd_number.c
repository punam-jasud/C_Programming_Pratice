#include<stdio.h>

void main()
{
	int n,i=1;
	printf("Enter n : ");
	scanf("%d",&n);

	while(i <= n)
	{
		printf("%d\t",i);
		i = i + 2;
 	}
	printf("\n");

}
