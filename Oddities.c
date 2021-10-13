#include<stdio.h>

int main()
{
	int n, a[20];
	int i=0;
	
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		(a[i] % 2 == 0) ? printf("%d is even\n", a[i]) : printf("%d is odd\n", a[i]);
	}
	
	return 0;
}
