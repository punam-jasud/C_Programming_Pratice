#include<stdio.h>

void main()
{
	int num;
	printf("Enter Num: ");
	scanf("%d",&num);

	(num & 1)?printf("%d is odd\n",num):printf("%d is even\n",num);

}
