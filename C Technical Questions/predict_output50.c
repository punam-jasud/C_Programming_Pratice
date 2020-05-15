#include<stdio.h>

struct 
{
	int i;
	float ft;
}x;


void main()
{
	x.i=4;
	x.ft=7.96623;
	printf("%d %.2f\n",x.i,x.ft);	
}
