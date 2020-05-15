#include<stdio.h>

void main()
{
	int roll,m1,m2,m3,total;
	float avg;

	printf("\nEnter Roll No : ");
	scanf("%d",&roll);

	printf("Enter marks of three subject  m1,m2,m3: ");
	scanf("%d%d%d",&m1,&m2,&m3);

	total= m1+m2+m3;
	avg = total/3.0 ;

	printf("\nTotal : %d\n",total);
	printf("Avarage : %f\n",avg);

	if(avg >= 60)
		printf("Grade A\n");
	else if((avg >= 50) && (avg < 60))
		printf("Grade B\n");
	else if((avg >= 40) && (avg < 50))
		printf("Grade C\n");
	else 
		printf("Grade F\n\n");
	
	

}
