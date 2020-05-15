#include<stdio.h>

void main()
{
	int x = 97;
	int y = sizeof(x++);
	printf("x is %d\nY is %d\n",x,y);
}
