#include<stdio.h>

int main()
{
	int a1,b1,c1,d1;
	int a2,b2,c2,d2;
	int a3,b3,c3,d3;
	int a4,b4,c4,d4;
	int a5,b5,c5,d5;
	int tot1,tot2,tot3,tot4,tot5;
	
	scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
	tot1=a1+b1+c1+d1;
	
	scanf("%d %d %d %d",&a2,&b2,&c2,&d2);
	tot2=a2+b2+c2+d2;
		
	scanf("%d %d %d %d",&a3,&b3,&c3,&d3);
	tot3=a3+b3+c3+d3;
		
	scanf("%d %d %d %d",&a4,&b4,&c4,&d4);
	tot4=a4+b4+c4+d4;
		
	scanf("%d %d %d %d",&a5,&b5,&c5,&d5);
	tot5=a5+b5+c5+d5;
	
	if(tot1>tot2 && tot1>tot3 && tot1>tot4 && tot1>tot5)
	{
		printf("1 %d",tot1);
	}
	else if(tot2>tot1 && tot2>tot3 && tot2>tot4 && tot2>tot5)
	{
		printf("2 %d",tot2);
	}
	else if(tot3>tot1 && tot3>tot2 && tot3>tot4 && tot3>tot5)
	{
		printf("3 %d", tot3);
	}
	else if(tot4>tot1 && tot4>tot2 && tot4>tot3 && tot4>tot5)
	{
		printf("4 %d", tot4);
	}
	else 
	{
		printf("5 %d", tot5);
	}
	
	
	
	
	
	return 0;
}
