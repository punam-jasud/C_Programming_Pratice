#include<stdio.h>


int main()
{
	int a,b,c;
	printf("Enter the values of three numbers a , b, c : ");
	scanf("%d%d%d",&a,&b,&c);

	if((a >= b) && (a >= c))
	{
		if(b >= c)
		{
			printf("Descending Order : %d %d %d\n",a,b,c);
			printf("Ascending Order : %d %d %d\n",c,b,a);
		}
		else
		{
			printf("Descending Order : %d %d %d\n",a,c,b);
			printf("Ascending Order : %d %d %d\n",b,c,a);
		}
	}
	else if((b >= a) && (b >= c))
	{
		if(a >= c)
		{
			printf("Descending Order : %d %d %d\n",b,a,c);
			printf("Ascending Order : %d %d %d\n",c,a,b);
		}
		else
		{
			printf("Descending Order : %d %d %d\n",b,c,a);
			printf("Ascending Order : %d %d %d\n",a,c,b);
		}
	}
	else if((c >= a) && (c >= b))
	{
		if(a >= b)
		{
			printf("Descending Order : %d %d %d\n",c,a,b);
			printf("Ascending Order : %d %d %d\n",b,a,c);
		}
		else
		{
			printf("Descending Order : %d %d %d\n",c,b,a);
			printf("Ascending Order : %d %d %d\n",a,b,c);
		}
	}
	return 0;
}
