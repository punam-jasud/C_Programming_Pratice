#include<stdio.h>

int sum(int x)
{
	int s;
	for(s=0;x>0;s=s+x%10,x=x/10);
	return s;

}

void main()
{
	printf("%d\n",sum(143));
}
