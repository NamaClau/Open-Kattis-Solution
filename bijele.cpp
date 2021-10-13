#include<stdio.h>

int main()
{
	int king=0, queen=0, rook=0, bishop=0, knight=0, pawn=0;
	int a=0,	b=0,		c=0,	d=0,	e=0,		f=0;
	
	scanf("%d %d %d %d %d %d",&king, &queen, &rook, &bishop, &knight, &pawn);
	
	if(king > 1 || king < 1)
	{
		while(king>1)
		{
			a--;
			king--;
		}
		while(king<1)
		{
			a++;
			king++;
		}
	}
	
	if(queen > 1 || queen < 1)
	{
		while(queen>1)
		{
			b--;
			queen--;
		}
		while(queen<1)
		{
			b++;
			queen++;
		}
	}
	
	if(rook > 2 || rook<2)
	{
		while(rook > 2)
		{
			c--;
			rook--;
		}
		while(rook<2)
		{
			c++;
			rook++;
		}
	}
	
	if(bishop > 2 || bishop < 2)
	{
		while(bishop > 2)
		{
			d--;
			bishop--;
		}
		while(bishop<2)
		{
			d++;
			bishop++;
		}
	}
	
	if(knight > 2 || knight<2)
	{
		while(knight > 2)
		{
			e--;
			knight--;
		}
		while(knight<2)
		{
			e++;
			knight++;
		}
	}
	
		if(pawn > 8 || pawn< 8)
	{
		while(pawn > 8)
		{
			f--;
			pawn--;
		}
		while(pawn<8)
		{
			f++;
			pawn++;
		}
	}

	printf("%d %d %d %d %d %d", a, b, c, d, e, f);
	
		
	return 0;
}
