#include<stdio.h>

int main()
{

	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);

	if(n % 5 == 0)
		printf("Number is divisible by 5\n");
	else
		printf("Number is not divisible by 5\n");
}
