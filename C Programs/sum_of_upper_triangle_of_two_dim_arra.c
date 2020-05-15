#include<stdio.h>


void main()
{
	int m,n,i,j,mat[5][5],sum=0;
	printf("Enter Order of Matrix : ");
	scanf("%d%d",&m,&n);

	printf("Enter arrray elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i <= j)
				sum = sum + mat[i][j];
		}
		
	}
	printf("Sum of upper triangle  matrix elements is : %d\n",sum);

}
