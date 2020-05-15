#include<stdio.h>
#include<ctype.h>

int main()
{
	char s[30];
	int alphabets=0,digits=0,symbols=0,i;
	
	printf("Enter String : ");
	scanf("%s",s);

	for(i=0;s[i] != '\0';i++)
	{
		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')  )
		{
			alphabets++;
		}
		else if((s[i] >= '0' && s[i] <= '9'))
		{
			digits++;
		}
		else
		{
			symbols++;
		}
	}

	printf("Alphabets : %d\n",alphabets);
	printf("Digits : %d\n",digits);
	printf("Symbols : %d\n",symbols);
	return 0;
}
