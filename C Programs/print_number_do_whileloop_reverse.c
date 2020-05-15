#include<stdio.h>

void main()
{
	int i,n;
	printf("Enter n : ");
	scanf("%d",&n);
		
	i=n;	
	do
	{
		printf("%d\t",i);
		i--;
	}while(i >= 1);
	printf("\n");
	
}
