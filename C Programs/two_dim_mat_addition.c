#include<stdio.h>


void main()
{
	int m,n,i,j,a[5][5],b[5][5],c[5][5];
	printf("Enter Order of Matrix : ");
	scanf("%d%d",&m,&n);

	printf("Enter elements of matrix first : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter elements of matrix second : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}


	printf("Resultant Matrix : \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

}
