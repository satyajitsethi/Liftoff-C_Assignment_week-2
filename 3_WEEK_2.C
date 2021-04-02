#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	int i,count = 1;
	printf("ENTER A STRING:");
	gets(s);
	
	for(i=0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			count++;
		}
	}
	printf("\n Number of words in given string : %d",count);
	
	return 0;
}