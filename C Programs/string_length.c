#include<stdio.h>
#include<string.h>

void main()
{
	char s[20];
	int len=0,i;
	printf("Enter String 1: ");
	scanf("%s",s);

	for(i=0;s[i] != '\0';i++)
	{
		len++;
	}

	printf("String Lenth : %d\n",len);
	
}
