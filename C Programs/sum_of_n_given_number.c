#include<stdio.h>

void main()
{
	int n,i,sum=0,num;
	printf("Enter n : ");
	scanf("%d",&n);
	
	printf("\nEntered Number : \n\n");

	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		sum = sum + num;
	}

	printf("\nSum of given n Number is : %d\n",sum);

}
