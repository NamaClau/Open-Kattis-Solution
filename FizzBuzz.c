#include<stdio.h>

int main()
{
	int a,b,c,d=1;
	scanf("%d %d %d",&a, &b,&c);
	do
	{
		if(d%a==0 && d%b==0)
		{
			printf("fizzbuzz\n");
		}
		else if(d%a==0)
		{
			printf("fizz\n");
		}
		else if(d%b==0)
		{
			printf("buzz\n");
		}
		else
		{
			printf("%d\n",d);
		}
		d++;
	}
	while(d<=c);


	return 0;
}

