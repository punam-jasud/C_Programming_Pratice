#include<stdio.h>
int square(int x)
{
	return (x*x);
}

int cube(int x)
{

	return(x*x*x);
}

void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	printf("Square : %d\n",square(n));
	printf("Cube : %d\n",cube(n));
	
	cube(n);
}
