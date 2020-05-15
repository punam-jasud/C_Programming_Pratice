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

void insertion_sort(int *a,int n)
{
	int k,temp,ptr,i=1;
	for(k=1;k<n;k++)
	{
		temp=a[k];
		ptr=k-1;
		while(temp < a[ptr] && ptr >=0 )
		{
			a[ptr+1]=a[ptr];
			ptr = ptr - 1;
		}	
		a[ptr+1] = temp;
		printf("Pass : ");
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
	insertion_sort(a,n);
}
