#include<stdio.h>

int main()
{

	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);

	if(n > 0)
		printf("Number is positive\n");
	else if (n < 0)
		printf("Number is negative\n");
	else
		printf("Number is zero\n");
}
