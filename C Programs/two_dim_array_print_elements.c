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

	printf("Array Elements : \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}

}
