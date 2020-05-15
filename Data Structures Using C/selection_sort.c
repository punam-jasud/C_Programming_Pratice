#include<stdio.h>
#include<stdlib.h>

void print(int* a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void selection_sort(int *a,int n)
{
	int i,temp,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		temp = a[min];
		a[min]=a[i];
		a[i]=temp;

		printf("Pass %d : ",i);
		print(a,n);
	}
	
	
}
void main()
{
	int *a,n,i;
	printf("Enter Number of Elements: ");
	scanf("%d",&n);

	a = (int *)malloc(n*sizeof(int));
	printf("Enter the elements :\n\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nElements Before Sorting: ");
	print(a,n);
	selection_sort(a,n);
}
