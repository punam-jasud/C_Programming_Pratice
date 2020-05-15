#include<stdio.h>

void main()
{
	int a,b;
	char op;

	printf("Enter operator(+,-,*,/) : ");
	scanf("%c",&op);

	printf("Enter a and b : ");
	scanf("%d%d",&a,&b);
	
	switch(op)
	{
		case '+' : printf("Result : %d\n",a+b);break;
		case '-' : printf("Result : %d\n",a-b);break;
		case '*' : printf("Result : %d\n",a*b);break;
		case '/' : printf("Result : %d\n",a/b);break;
		default : printf("Invalid Operator\n");
	}
}

