#include<stdio.h>

void main()
{
	int i=5,j;
	j = i++ + ++i + i++ ; 
	printf("%d %d\n",i,j);
}
