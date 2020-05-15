#include<stdio.h>
#include<string.h>

void main()
{
	char s1[20],s2[20];
	int i;
	printf("Enter String 1: ");
	scanf("%s",s1);
	
	for(i=0;s1[i] != '\0';i++)
	{
		s2[i] = s1[i];
	}

	s2[i] = '\0';
	printf("Copied String s2 : %s\n",s2);
	

}
