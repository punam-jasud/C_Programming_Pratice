#include<stdio.h>
#include<ctype.h>

int main()
{
	char s[30];
	int i,vowles=0;
	
	printf("Enter String : ");
	scanf("%s",s);

	for(i=0;s[i] != '\0';i++)
	{
		if((s[i] == 'A' || s[i] == 'I' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U') ||
		   (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u'))
		{
			vowles++;
		}
		
	}

	printf("Vowels : %d\n",vowles);
	return 0;
}
