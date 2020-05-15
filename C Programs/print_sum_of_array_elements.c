#include<stdio.h>

void main()
{
	int i,a[20],n,sum=0;
	printf("Enter Number: ");
	scanf("%d",&n);

	printf("Enter array elements: \n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Element %d :  ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	
	}
	printf("Sum of all array elements is : %d\n",sum);
}


