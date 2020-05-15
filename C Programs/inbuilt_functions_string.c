#include<stdio.h>
#include<string.h>

void main()
{
	char s1[20],s2[20];

	printf("Enter String : ");
	scanf("%s",s1);

	printf("\nString Length: %d\n",strlen(s1));
	printf("\nString Reverse: %d\n",strrev(s1));
	printf("\nString in Uppercase: %d\n",strupr(s1));
	printf("\nString in Lowercase: %d\n",strlwr(s1));

	strcpy(s2,s1);
	printf("Copied String : %s",s2);

}

