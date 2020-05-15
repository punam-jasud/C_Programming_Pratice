#include<stdio.h>

void main()
{
	int a=2,b=2,c=0,d=2,m;
	m = a++ && b++ && c++ || d++ ;
	printf("%4d %4d %4d %4d %4d\n",a,b,c,d,m);
}
