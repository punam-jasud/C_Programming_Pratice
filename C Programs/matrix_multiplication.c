#include<stdio.h>


void main()
{
	int m,n,i,j,k,a[5][5],b[5][5],c[5][5];
	printf("Enter Order of Matrix : ");
	scanf("%d",&m);

	printf("Enter elements of matrix first : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter elements of matrix second : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j] = 0;
			for(k=0;k<m;k++)
				c[i][j]= c[i][j] + a[i][k]*b[k][j];
		}
	}


	printf("Resultant Matrix : \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

}
