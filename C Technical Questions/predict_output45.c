#include<stdio.h>

int sq(int a)
{
	return a*a;
}

void main()
{
	int a=1,x;
	x= sq(++a)+sq(a++)+sq(a++);
	printf("%d\n",x);
}
