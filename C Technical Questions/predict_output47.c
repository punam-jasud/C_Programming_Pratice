#include<stdio.h>


int i;
int fun();

int main()
{

	while(i)
	{
		fun();
		main();			
	}
	printf("hello\n");
	return 0;
}

int fun()
{
	printf("Hi");
}
