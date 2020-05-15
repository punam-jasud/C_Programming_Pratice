#include<stdio.h>

 int main(int argc, char const *argv[])
{

	float cel,f;
	printf("Enter Temperature in Celcius : ");
	scanf("%f",&cel);
	f=cel*1.8+32;
	printf("Fahrenhiet : %.1f\n",f);	
	return 0;
}