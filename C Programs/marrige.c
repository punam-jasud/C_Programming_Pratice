
//checking marraige eligibility
#include<stdio.h>

void main()
{
	char maratialStatus,gender;
	int age;

	printf("Enter maratialStaus ,Gender , Age : (eg : m,f,21) : " );
	scanf("%c,%c,%d",&maratialStatus,&gender,&age);

	if(maratialStatus == 'm')
	{
		printf("You cannot Marry\n");
	}
	else if(maratialStatus == 'u')
	{
		if(gender == 'm')
		{
			if(age >= 21)
				printf("You can marry\n");
			else
				printf("You can not married\n");
		}
		else if(gender == 'f')
		{
			if(age >= 18)
				printf("You can marry\n");
			else
				printf("You can not married\n");
		}
		else
			printf("Invalid input gender\n");
	}
	else
	{
		printf("\nInvalid input maratial status\n");
	}
}
