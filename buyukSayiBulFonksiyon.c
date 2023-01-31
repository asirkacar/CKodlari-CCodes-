#include <stdio.h>

int buyuk(int x, int y)
{
	if (x>y)
		return x;
	else
		return y;
}

void main()
{
	int a,b;
	printf("Giris1: "); scanf("%d", &a);
	printf("Giris2: "); scanf("%d", &b);
	printf("Buyuk Olan: %d", buyuk(a,b));
}
