#include<stdio.h>
#include<stdlib.h>


int partition(int *data,int l,int h)
{
	int pivot,i,j,temp;
	pivot=data[l];
	i=l;
	j=h+1;
	while(i < j)
	{
		do
		{
			i++;
		}while(data[i] < pivot && i <= h);
		do
		{
			j--;
		}while(data[j] > pivot && j >= l);
		if(i < j)
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	data[l]=data[j];
	data[j]=pivot;
	return j;
}


void quick_sort(int *data,int l,int h)
{
	int j;
	if(l  < h)
	{
		j=partition(data,l,h);
		quick_sort(data,l,j-1);
		quick_sort(data,j+1,h);

	}

}


void main()
{
	int *data,n,i;
	printf("How many elements: ");
	scanf("%d",&n);

	data  = (int*)malloc(n*sizeof(int));
	printf("Enter Elements : \n\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}

	quick_sort(data,0,n-1);

	printf("Array after sorting :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",data[i]);
	}
	printf("\n");
}

