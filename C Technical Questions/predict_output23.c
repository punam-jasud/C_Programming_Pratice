#include<stdio.h>

void foo(int *arr[]])
{

	int i=10,j=2,k;
	arr[0]=&i;
	arr[1]=&j;
	*arr[0]=2;
	for(k=0;k<2;k++)
		printf("%d\n",*arr[k]);
}

void main()
{
	int arr[2][3];
	foo(arr);
}

