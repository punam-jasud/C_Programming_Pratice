#include<stdio.h>
#include<string.h>

void main()
{
	char *str = "X";
	char c = 'x';
	char arr[1];
	arr[0] = c;
	printf("%ld %ld\n",strlen(str),strlen(arr));
}
