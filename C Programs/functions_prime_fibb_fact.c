#include<stdio.h>


void fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact = fact * i;
	}

	printf("Factorial of given number is : %d\n",fact);
}

int isPrime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n % i == 0)
		{
			printf("Number is not prime\n");
			return 0;
		}
	}
	printf("Number is prime\n");

}

void fibbo(int n)
{
	int prev=0,cur=1,temp,i;

	printf("Fibbonnaci Series : \n");
	printf("%d\t%d",prev,cur);
	for(i=3;i<=n;i++)
	{
		temp = cur;
		cur = prev + cur;
		prev = temp;
		printf("\t%d",cur);
	}
	printf("\n");
}

void main()
{

	int num,i;
	printf("Enter Number : ");
	scanf("%d",&num);

	fact(num);
	isPrime(num);
	fibbo(num);
}
