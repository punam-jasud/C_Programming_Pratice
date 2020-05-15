#include<stdio.h>
#include<string.h>

void main()
{
	char s1[20],s2[20];
	int i,j,len=0;
	printf("Enter String 1: ");
	scanf("%s",s1);

	for(i=0;s1[i] != '\0';i++)
	{
		len++;
	}

	j=0;
	for(i=len-1;s1[i] >= 0;i--)
	{
		s2[j] = s1 [i];
		j++;
	}
	s2[j] = '\0';

	printf("S2 after string Reverse : %s\n",s2);

}
