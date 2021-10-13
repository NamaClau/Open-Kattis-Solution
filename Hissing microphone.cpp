#include <stdio.h>
#include<string.h>

int main()
{
	char ch[100];
	int s=0;
	

	scanf("%s",&ch); getchar();

	for(int j=0; j<strlen(ch); j++)
	{
		if(ch[j]=='s' && ch[j+1]=='s')
		{
			//printf("\nhuruf[%d]='%c' dan huruf[%d]='%c'\n",j,ch[j],j+1,ch[j+1]);
			s++;
		}
	}
	
	if(s>=1)
	{
		printf("hiss\n");
	}
	else
	{
		printf("no hiss\n");
	}
	
	
    return 0;
}
