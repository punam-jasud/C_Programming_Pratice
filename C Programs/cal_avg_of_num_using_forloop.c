#include<stdio.h>

void main()
{
	int i,n,sum_avg=0,num;
	float avg;

	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		sum_avg = sum_avg + num;
	}
	avg = sum_avg / (float)n;

	printf("\nAvarage of n numbers is : %.1f\n\n",avg);

}

