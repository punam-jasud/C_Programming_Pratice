#include<stdio.h>

void main()
{

	int n,rem,sum=0,temp;
	printf("Enter n : ");
	scanf("%d",&n);
	temp=n;

	while(n > 0)
	{
		rem = n % 10;
		sum = sum + rem*rem*rem;
		n = n /10;
	}
	if(sum == temp)
		printf("No is Armstrong\n");
	else
		printf("No is not armstrong\n");
}
