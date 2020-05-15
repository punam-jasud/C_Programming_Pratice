#include<stdio.h>
#include<string.h>

void main()
{
	char s1[20],s2[20];
	int i,j,len=0;
	printf("Enter String 1: ");
	scanf("%s",s1);

	printf("Enter String 2: ");
	scanf("%s",s2);

	for(i=0;s1[i] != '\0';i++)
	{
		if(s1[i] != s2[i])
		{
			if(s1[i] > s2[i])
			{
				printf("s1 is greater\n");
				break;

			}

			else
			{
				printf("s2 is greater\n");
				break;
			}
		}
	}

	if(s1[i] == '\0')
		printf("S1 and S2 are equal\n");

}
