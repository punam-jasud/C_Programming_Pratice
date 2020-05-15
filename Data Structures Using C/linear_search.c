#include<stdio.h>
#include<stdlib.h>

int linear_search(int *data,int item,int n)
{
	int loc;
	data[n+1]=item;
	loc=1;
	while(data[loc] != item)
	{
		loc=loc+1; 
	}
	if(loc == n+1)
		loc=0;

	return loc;

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
	loc=linear_search(data,item,n);
	if(loc > 0)
		printf("%d Found at Location %d\n",item,loc);
	else
		printf("Search Unsuccessfull..!\n");

}

