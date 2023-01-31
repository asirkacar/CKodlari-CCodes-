#include <stdio.h>

void carpim(int x, int y)
{
	int carpim;
	carpim = x*y;
	printf("%d", carpim);
} 
void main()
{
	int a,b;
	printf("Giris1: "); scanf("%d", &a);
	printf("Giris2: "); scanf("%d", &b);
	carpim(a,b);
}
