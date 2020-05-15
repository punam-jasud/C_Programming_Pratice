#include<stdio.h>

void main()
{
	int n,i,a[10];
	printf("Enter Number : ");
	scanf("%d",&n);
	
	a[0]=0;
	a[1]=1;

	for(i=2;i<n;i++)
	{
		a[i] = a[i-1]+a[i-2];
	}

	printf("\nFibbonaaci Series : \n\n");

	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

	printf("\n\n");
}
