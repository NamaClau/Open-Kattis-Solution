#include<stdio.h>
#include<string.h>

int main()
{
	char bulan[4];
	int tanggal,n,benar;
	
	scanf("%s %d",&bulan, &tanggal); getchar();
	
	n=strlen(bulan);
	
	for(int i=0; i<n; i++)
	{
		if( ((bulan[0]=='O' && bulan[1]=='C' && bulan[2]=='T') && tanggal==31) || ((bulan[0]=='D' && bulan[1]=='E' && bulan[2]=='C') && tanggal==25) ) 
		{
			benar++;
		}
		else
		{
			benar=0;
		}
	}
	
	if(benar>=1)
	{
		printf("yup\n");
	}
	else
	{
		printf("nope\n");
	}
	
	
	return 0;
}
