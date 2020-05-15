#include<stdio.h>

void main()
{
	int i,a[20],n,sum=0,temp,j;
	printf("Enter Number: ");
	scanf("%d",&n);

	printf("Enter array elements: \n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Element %d :  ",i+1);
		scanf("%d",&a[i]);
	}

	//ascending logic
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;

			}

		}
	}

	printf("\nArray Elements in ascending order:\n\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);


	//Descending logic
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;

			}

		}
	}

	printf("\nArray Elements in Descending order:\n\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}


