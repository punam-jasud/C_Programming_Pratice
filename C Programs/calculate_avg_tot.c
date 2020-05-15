#include<stdio.h>


int main()
{
	int roll,m1,m2,m3,total;
	float avg;

	printf("\nEnter Roll No: ");
	scanf("%d",&roll);

	printf("Enter m1 : ");
	scanf("%d",&m1);
	
	printf("Enter m2 : ");
	scanf("%d",&m2);
		
	printf("Enter m3: ");
	scanf("%d",&m3);

	total = m1  + m2 +m3;
	avg = total / 3.0 ; 

	printf("\n\nStudent Details : \n\n");
	printf("Roll : %d\n",roll);
	printf("Mark 1 : %d\n",m1);
	printf("Mark 2 : %d\n",m2);
	printf("Mark 3 : %d\n",m3);
	printf("Total Marks : %d\n",total);
	printf("Avarage : %.1f\n",avg);

	return 0;
}
