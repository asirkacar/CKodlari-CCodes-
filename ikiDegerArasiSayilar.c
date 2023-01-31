#include <stdio.h>

int main()
{
	int x,y,x1,y1;
	
	printf("Ilk: ");
	scanf("%d", &x);
	printf("Ikinci: ");
	scanf("%d", &y);
	x1=x; y1=y;
	printf("-----------FOR---------\n");
	if (x<y)
	{
		for (; x<=y; x++)
			printf("%d\n", x);		
	}
	else
	{
		for (; y<=x; y++)
			printf("%d\n", y);
	}

	printf("-----------WHILE---------\n");
	
	if (x1<y1)
	{
		while(x1<=y1)
		{
			printf("%d\n", x1);
			x1++;
		}
	}
	else
	{
		while (y1<=x1)
		{
			printf("%d\n", y1);
			y1++;
		}
	}

}
