#include<stdio.h>

void printArray(int arr[],int size)
{
	const int N=10;
	int j;
	for(j=0;j<size;j++)
	{
		printf("%4d",arr[j]);
		if(j % N == N-1)
			printf("\n");
	}
}

void main()
{
	int x[]={1,2,3,4,5,6,7,8,9,10,
		 11,12,13,14,15,16,17,18,19,20,
		 21,22,23,24,25,26,27,28,29,30,
		 31,32,33,34,35,36,37,38,39,40
		};

	printArray(x,40);
	printf("\n");
}
