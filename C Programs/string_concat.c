#include<stdio.h>
#include<string.h>

void main()
{
	char s1[20],s2[20];
	printf("Enter String 1: ");
	scanf("%s",s1);

	printf("Enter String 2: ");
	scanf("%s",s2);

	printf("Concatenated String : %s\n",strcat(s1,s2));
}
