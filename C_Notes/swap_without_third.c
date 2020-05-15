#include<stdio.h>

void main()
{
	
	int x,y;
	printf("Enter value of x and y :");
	scanf("%d %d",&x,&y);

	x=x+y;
	y=x-y;
	x=x-y;

	printf("%d %d\n",x,y);
}