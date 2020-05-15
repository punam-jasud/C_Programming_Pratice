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
		len++;
	}

	j=0;
	for(i=len;s2[j] != '\0';i++)
	{
		s1[i] = s2 [j];
		j++;
	}
	s1[i] = '\0';

	printf("S1 after string join : %s\n",s1);

}
