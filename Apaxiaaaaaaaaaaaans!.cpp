#include<stdio.h>
#include<string.h>

int main()
{
	char word[300];
	
	scanf("%s",&word);
	
	for(int i=0 ; i<strlen(word) ; i++)
	{
		if(word[i+1] != word[i])
		{
			printf("%c",word[i]);
		}
	}
	
	
	
	return 0;
}
