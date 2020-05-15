#include<stdio.h>

void main()
{
	int n;
	printf("\nEnter Number : ");
	scanf("%1d",&n);

	switch(n)
	{
		case 0: printf("Zero\n");break;
		case 1: printf("one\n");break;
		case 2: printf("two\n");break;
		case 3: printf("three\n");break;
		case 4: printf("four\n");break;
		case 5: printf("five\n");break;
		case 6: printf("six\n");break;
		case 7: printf("seven\n");break;
		case 8: printf("Eight\n");break;
		case 9: printf("Nine\n");break;
		default:printf("Invalid Digit\n");
		
	}

}
