#include<stdio.h>

int main()
{

	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);

	if(n % 2 == 0)
		printf("Number is even\n");
	else
		printf("Number is odd\n");
}
