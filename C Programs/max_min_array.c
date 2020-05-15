#include<stdio.h>

void main()
{
	int i,a[20],n,sum=0,max,min;
	printf("Enter Number: ");
	scanf("%d",&n);

	printf("Enter array elements: \n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Element %d :  ",i+1);
		scanf("%d",&a[i]);
	}

	max=min=a[0];

	for(i=1;i<n;i++)
	{
		if(a[i] < min)
			min = a[i];
		if(a[i] > max)
			max = a[i];
	}

	printf("\nMax Element : %d\nMin Element: %d\n",max,min);
}


