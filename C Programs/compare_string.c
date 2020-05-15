#include<stdio.h>
#include<string.h>

void main()
{
	char s1[20],s2[20];
	printf("Enter String 1: ");
	scanf("%s",s1);

	printf("Enter String 2: ");
	scanf("%s",s2);

	if(strcmp(s1,s2) > 0)
		printf("s1 is greater than s2\n");
	else if(strcmp(s1,s2) < 0)
		printf("s2 is greater than s1\n");
	else
		printf("Strings are equal\n");

}
