#include<stdio.h>

int add(int x,int y)
{
	int c;
	c = x+y;
	return c;
}

int sub(int x,int y)
{
	return (x-y);
}

int mul(int x,int y)
{
	return (x*y);
}

int div(int x,int y)
{
	return (x/y);
}


void main()
{
	int a,b;

	printf("Enter values of a and b : ");
	scanf("%d%d",&a,&b);

	printf("Addition : %d\n",add(a,b));
	printf("Subtraction : %d\n",sub(a,b));
	printf("Multiplication : %d\n",mul(a,b));
	printf("Division : %d\n",div(a,b));
}

