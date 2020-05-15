#include<stdio.h>

void main()
{
	float price;
	printf("Enter price : ");
	scanf("%f",&price);

	int rs = (int)price;
	double decpart = price-rs;

	printf("Rupees : %d\tPaisa : %f\n",rs,decpart);

}