#include<stdio.h>

void fun(int);

void main()
{
	int a=3;
	fun(a);
}

void fun(int n)
{
	if(n > 0)
	{
		fun(--n);
		printf("%d\n",n);
	}
}

