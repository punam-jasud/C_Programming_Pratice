#include<stdio.h>

void main()
{
	int number = 147;
	int res;
	if(number)
		res = number % 9 == 0 ? 9 : number % 9 ;
	else
		res= 0;
	printf("Res : %d\n",res);

}
