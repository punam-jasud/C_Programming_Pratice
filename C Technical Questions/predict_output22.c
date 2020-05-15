#include<stdio.h>

void main()
{
	static int i;
	for(++i;++i;++i)
	{
		printf("%d ",i);
		if(i==4)
			break;
	}
	printf("\n");
}
