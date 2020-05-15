#include<stdio.h>

void main()
{
	int rem,n;
	printf("Enter value of n : ");
	scanf("%d",&n);

	printf("Reverse Number : ");	

	while(n > 0)
	{
		rem = n % 10;
		printf("%d",rem);
		n = n /10;
	}

	printf("\n");
}
