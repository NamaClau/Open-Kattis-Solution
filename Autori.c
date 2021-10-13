#include<stdio.h>

int main()
{
	char ch[100];
	
	for(int i=0; i<ch[i]; i++)
	{
		scanf("%[^\n]",&ch[i]);
	}
	
	for(int i=0; i<ch[i]; i++)
	{
		if(ch[i]<'a' || ch[i]>'z')
		{
			if(ch[i]=='-')
			{
				continue;
			}
			else
			{
		
				printf("%c",ch[i]);
			}
		}
	
	}
	printf("\n");
	
	return 0;
}
