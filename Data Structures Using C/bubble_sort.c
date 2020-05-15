#include<stdio.h>
#include<stdlib.h>

void print(int *data,int n,int pass)
{
	int i;
	printf("\nPass : %d\n",pass);
	for(i=1;i<=n;i++)
	{
		printf("%d ",data[i]);
	}
	printf("\n");
}

void bubble_sort(int *data,int n)
{
	int k,ptr,temp,i,flag;
	 static int pass; 

	for(k=1;k<=n-1;k++)
	{
		ptr = 1;
		flag=0;
		while(ptr <= n-k)
		{
			if(data[ptr] > data[ptr + 1] )
			{
				temp = data[ptr];
				data[ptr]=data[ptr+1];
				data[ptr+1]=temp;
				flag=1;	
				
			}
			ptr = ptr+1;
			
		}
		if(flag==0)
			break;
		else
		{
			pass++;
			print(data,n,pass);
		}
		
	}
	printf("\n");

}

void main()
{
	int *data,n,i;
	printf("Enter Number of Elements : ");
	scanf("%d",&n);

	data = (int*)malloc(n*sizeof(int));
	if(data == NULL)
	{
		printf("Memory Not Allocated\n");
		exit(0);
	}

	printf("Enter the array elements : \n\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&data[i]);
	}
	bubble_sort(data,n);
	free(data);		

}

