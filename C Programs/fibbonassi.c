#include<stdio.h>

void main()
{
	int n,prev=0,i,cur=1,temp;

	printf("\nEnter Number : ");
	scanf("%d",&n);

	printf("%d\t%d",prev,cur);
	for(i=3;i<=n;i++)
	{
		temp=cur;
		cur = prev + cur;
		prev = temp;
		printf("\t%d",cur);
	}
	printf("\n");
}
