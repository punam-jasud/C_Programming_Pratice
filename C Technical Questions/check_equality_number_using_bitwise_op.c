#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter a and b: ");
	scanf("%d%d",&a,&b);
	if(!(a ^ b))
		printf("Equal\n");
	else
		printf("Not Equal\n");
}
