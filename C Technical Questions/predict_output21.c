#include<stdio.h>

void main()
{
	int i,j;
	i=j=2,3;
	while(--i && j++)
		printf("%d %d\n",i,j);
}
