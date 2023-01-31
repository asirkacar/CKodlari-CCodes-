#include <stdio.h>

int main()
{
	int x,y,x1,y1,toplam=0;
	
	printf("Ilk: ");
	scanf("%d", &x);
	printf("Ikinci: ");
	scanf("%d", &y);
	x1=x; y1=y;
	
	printf("-----------FOR---------\n");
	if (x<y)
	{
		for (; x<=y; x++)
		{
			toplam = toplam + x;
		}
		printf("Toplam: %d\n", toplam);
	}
	else
	{
		for(; y<=x; y++)
		{
			toplam = toplam + y;
		}
		printf("Toplam: %d\n", toplam);
	}
	
	printf("-----------WHILE---------\n");
	toplam = 0;
	if (x1<y1)
	{
		while(x1<=y1)
		{
			toplam = toplam + x1;
			x1++;
		}
		printf("Toplam: %d\n", toplam);
	}
	else
	{
		while(y1<=x1)
		{
			toplam = toplam + y1;
			y1++;
		}
		printf("Toplam: %d\n", toplam);
	}
}
