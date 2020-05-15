#include<stdio.h>

int main()
{

	float area,r;
	printf("\nEnter value of radius : ");
	scanf("%f",&r);

	area= 3.14 * r * r;
	printf("The area of given circle is %.1f\n",area);

	return 0;
}
