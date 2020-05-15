#include<stdio.h>
#include<stdlib.h>

int binary_search(int *data,int item,int lb,int ub)
{
	int mid,beg,end;
	beg=lb;
	end=ub;
	mid=(beg+end)/2;

	while(beg<=end && data[mid]!=item)
	{
		if(item < data[mid])
			end=mid-1;
		else
			beg=mid+1;

		mid=(beg+end)/2;
	}

	if(data[mid] == item)
		return mid;
	else
		return 0;	

}
void main()
{
	int *data,item,n,loc,i;
	printf("Enter Number of Array Elements : ");
	scanf("%d",&n);

	data = (int *)malloc(n*sizeof(int));

	printf("Enter Elements:\n\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&data[i]);
	}
	printf("Enter the item to search : ");
	scanf("%d",&item);
	loc=binary_search(data,item,1,n);
	if(loc > 0)
		printf("%d Found at Location %d\n",item,loc);
	else
		printf("Search Unsuccessfull..!\n");

}

