#include<stdio.h>

void main()
{
	int hours,minutes,seconds;

	printf("Enter time in hours : ");
	scanf("%d",&hours);

	minutes = hours*60;
	seconds=minutes*60;

	printf("Hours : %d\n",hours);
	printf("Minutes : %d\n",minutes);
	printf("Seconds : %d\n",seconds);
}