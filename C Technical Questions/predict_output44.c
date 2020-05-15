#include<stdio.h>

void main()
{
	int arr[3] = {10,20,30};
	int x = 0;
	x = ++arr[++x] + ++x + arr[--x];
	printf("%d\n",x);
}
