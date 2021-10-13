#include<stdio.h>

int main()
{
	float a=0,b=0,c=0;
	int n=0;
	
	scanf("%d",&n); getchar();
	
	for(int i=0; i<n ; i++)
	{
		scanf("%f %f %f",&a, &b, &c); getchar();
		if(a+b==c || a*b==c || a-b==c || a/b==c || b-a==c || b/a==c)
		{
			printf("Possible\n");
		}
		else
		{
			printf("Impossible\n");
		}
	}
	
	return 0;
}
