#include<stdio.h>

int main()
{

	int a , b;
	printf("Enter the value of a and b: ");
	scanf("%d%d",&a,&b);
	
	if(a > b)
		printf("a is greater than b\n");
	else if(b > a)
		printf("b is greater than a\n");
	else
		printf("Both are equal\n");
}
