#include<stdio.h>


void main()
{
	int n,rem;
	printf("Enter Number : ");
	scanf("%d",&n);

	while(n > 0)
	{
		rem = n % 10;
		switch(rem)
		{
			case 0: printf("Zero ");break;
			case 1: printf("one ");break;
			case 2: printf("two ");break;
			case 3: printf("three ");break;
			case 4: printf("four ");break;
			case 5: printf("five ");break;
			case 6: printf("six ");break;
			case 7: printf("seven ");break;
			case 8: printf("Eight ");break;
			case 9: printf("Nine ");break;
			default:printf("Invalid Digit\n");
		}

		n = n/10;
	}
	printf("\n");

}
