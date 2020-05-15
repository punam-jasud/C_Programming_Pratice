#include<stdio.h>

int main()
{
	float SI,p,n,r;

	printf("Enter the value of p,n,r : ");
	scanf("%f%f%f",&p,&n,&r);

	SI = (p * n * r)/100;

	printf("The Simple Intrest is : %6.2f\n",SI);

	return 0;
}
