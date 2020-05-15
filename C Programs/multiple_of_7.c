#include<stdio.h>

int main()
{

	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);

	if(n % 7 == 0)
		printf("Number is multiple of 7\n");
	else
		printf("Number is not multiple of 7\n");
}
