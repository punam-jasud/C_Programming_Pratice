#include<stdio.h>

int main()
{

	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);

	if( n > 10)
		printf("Number  is greater than 10\n");
	else if(n < 10)
		printf("Number is less than 10\n");
	else
		printf("Number is 10\n");
}
