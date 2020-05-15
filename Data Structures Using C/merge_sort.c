#include<stdio.h>
#include<stdlib.h>


void merge(int *data,int *L,int *R,int n)
{
	int i=0,j=0,k=0;
	int nL,nR;
	nL=n/2;
	nR=n-nL;
	
	while(i < nL && j < nR)
	{
		if(L[i] < R[j])
		{
			data[k]=L[i];
			i++;
		}
		else
		{
			data[k]=R[j];
			j++;
		}
		k++;
	}
	while(i < nL)
	{
		data[k]=L[i];
		k++;
		i++;
	}
	while(j < nR)
	{
		data[k]=R[j];
		k++;
		j++;
	}

}

void merge_sort(int *data,int n)
{
	int *L,*R,mid,i;
	mid=n/2;
	if(n < 2)
	{
		return;
	}
	else
	{
		L = (int*)malloc(mid*sizeof(int));
		R = (int*)malloc((n-mid)*sizeof(int));

		for(i=0;i<mid;i++)
		{
			L[i]=data[i];

		}
		for(i=mid;i<n;i++)
		{
			R[i-mid]=data[i];

		}

		merge_sort(L,mid);
		merge_sort(R,n-mid);
		merge(data,L,R,n);

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

	merge_sort(data,n);

	printf("Array after sorting :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",data[i]);
	}
	printf("\n");
}

