#include<stdio.h>

void main()
{
	long sec,hr,min,t;
	printf("Enter time in Seconds: ");
	scanf("%ld",&sec);

	hr=sec/3600;
	t=sec % 3600;
	min = t/60;
	sec = t % 60;
	printf("Time : %ld hrs %ld mins %ld secs \n",hr,min,sec);

}
