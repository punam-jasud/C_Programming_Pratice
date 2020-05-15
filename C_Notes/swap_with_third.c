#include<stdio.h>

void main()
{
	
	int x,y,temp;
	printf("Enter value of x and y :");
	scanf("%d %d",&x,&y);

	temp=x;
	x=y;
	y=temp;
	printf("%d %d\n",x,y);
}