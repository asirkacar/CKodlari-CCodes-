#include <stdio.h>

int carpimToplam(int x, int y)
{
	int carpim, toplam;
	carpim = x*y;
	toplam = x+y;
	printf("Toplam: %d\t", toplam);
	printf("Carpim: %d", carpim);
}

int main()
{
	int a,b;
	printf("Giris1: "); scanf("%d", &a);
	printf("Giris2: "); scanf("%d", &b);
	carpimToplam(a,b);
}
