#include<stdio.h>

int main()
{
	float area,b,h;
	printf("\nEnter value of base and height : ");
	scanf("%f%f",&b,&h);

	area = 0.5 * b *h ;

	printf("The area of given triangle is %.1f\n",area);

}
