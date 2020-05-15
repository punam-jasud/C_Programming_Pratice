#include<stdio.h>

void main()
{

	int year,months,weeks,days,inputDays;
	printf("Enter Total Number of Days : ");
	scanf("%d",&inputDays);

	printf("Total Number of Days : %d\n",inputDays);

	year=inputDays/365;
	inputDays=inputDays-year*365;

	months=inputDays/30;
	inputDays=inputDays-months*30;

	weeks=inputDays/7;
	days=inputDays-weeks*7;

	
	printf("Years : %d\n",year);
	printf("Months : %d\n",months);
	printf("Weeks : %d\n",weeks);
	printf("Days : %d\n",days);

}