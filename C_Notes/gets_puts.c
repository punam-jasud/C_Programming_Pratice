#include<stdio.h>

void main()
{
	char str[30];
	printf("Enter the string : ");
	gets(str);

	printf("String using gets : ");
	puts(str);

	printf("String using scanf : ");
	scanf("%s",str);

	printf("%s\n",str);
}
