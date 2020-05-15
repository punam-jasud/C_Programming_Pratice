#include<stdio.h>

void main()
{

	int p,r,t;
	float si;
	printf("Enter Principal , RateofIntrest , TimePeriod : ");
	scanf("%d%d%d",&p,&r,&t);

	si=(p*r*t)/100;

	printf("Simple Intrest : %f\n",si);

}