#include<stdio.h>
#include<string.h>

void main()
{
	char s1[20];
	int i;
	printf("Enter String 1: ");
	scanf("%s",s1);
	
	for(i=0;s1[i] != '\0';i++)
	{
		if(s1[i] >= 'a' && s1[i] <= 'z')
			s1[i] = s1[i] - 32;
	}

	printf("Uppercase String : %s\n",s1);
	

}
