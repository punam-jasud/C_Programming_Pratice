#include<stdio.h>


void main()
{
	int m,n,i,j,mat[5][5];
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
	printf("\nTranspose of matrix is : \n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",mat[j][i]);
		}
		printf("\n");
		
	}

}
