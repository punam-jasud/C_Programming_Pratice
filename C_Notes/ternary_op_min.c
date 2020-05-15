#include<stdio.h>

void main()
{
	
	int x,y;
	printf("Enter value of x and y :");
	scanf("%d %d",&x,&y);

	(x<y)?printf("Min No : %d\n",x):printf("Min No : %d\n",y);
	
}