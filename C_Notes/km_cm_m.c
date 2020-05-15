#include<stdio.h>

void main()
{
	int km,m,cm;
	float feet,inch;

	printf("Enter Distance in Kilometers : ");
	scanf("%d",&km);

	m=km*1000;
	cm=m*100;
	feet=km*3280.84;
	inch=feet*12;

	printf("Km : %d\n",km);
	printf("m : %d\n",m);
	printf("cm : %d\n",cm);
	printf("Feet : %f\n",feet);
	printf("Inches : %f\n",inch);


}