#include<stdio.h>

int main()
{
	float x,r1,r2,a,b,c;

	printf("Enter value of a,b,c : ");
	scanf("%f%f%f",&a,&b,&c);

	x = b * b - 4 * a * c;

	r1 = (-b+x)/2*a;
	r2 = (-b-x)/2*a;

	if(x > 0)
		printf("\nRoots are unequal..\n");
	else if(x < 0)
		printf("\nRoots are imaginary...\n");
	else
		printf("\nRoots are same..\n");

	printf("r1 : %.1f\n",r1);
	printf("r2 : %.1f\n",r2);

	return 0;


} 
