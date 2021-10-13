#include<stdio.h>
#include<string.h>

int main()
{
	char word[81], kata[81][81];
	char *p;
	int i=0, j=0, flag=1, comp=0 ;
	
	scanf("%[^\n]",&word); getchar();
	p = strtok(word, " ");
	
	while(p!=NULL)
	{
		strcpy(kata[i], p);
	
		if(i!=0)
		{
			for(j=0 ; j<i ; j++)
			{
				comp = strcmp(kata[i], kata[j]);
					
				if(comp==0)
				{
					flag--;
					break;
				}
			}
		}
		p = strtok(NULL, " ");
		i++;
	}

  flag>0 ? printf("yes\n") : printf("no\n");
	
	return 0;
}
