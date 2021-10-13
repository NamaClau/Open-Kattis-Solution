#include"stdio.h"

int main()
{
	long long int r[10000],e[10000],c[10000];
	int banyak;
	int i=0;
	
	scanf("%d",&banyak);
	for(i=0; i<banyak; i++)
	{
		scanf("%ld %ld %ld",&r[i], &e[i], &c[i]);
	}
	
	for(i=0; i<banyak; i++)
	{
		if(e[i]>(r[i]+c[i]))
		{
			printf("advertise\n");
		}
		else if(e[i]>=(r[i]+c[i]))
		{
			printf("does not matter\n");
		}
		else
		{
			printf("do not advertise\n");
		}
	}

	return 0;
}
