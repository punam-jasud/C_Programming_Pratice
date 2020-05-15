#include<stdio.h>

void main()
{
	int i,a[20],n,sum=0,max,min;
	printf("Enter Number: ");
	scanf("%d",&n);

	printf("Enter array elements: \n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Element %d :  ",i+1);
		scanf("%d",&a[i]);
	}

	printf("\nPositive Elements are: \n\n");
	for(i=0;i<n;i++)
	{
		if(a[i] > 0)
			printf("%d\n",a[i]);
	}

	printf("\nNegative Elements are: \n\n");
	for(i=0;i<n;i++)
	{
		if(a[i] < 0)
			printf("%d\n",a[i]);
	}

}


