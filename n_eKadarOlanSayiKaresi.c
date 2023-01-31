#include <stdio.h>

int main()
{
	char sayi=5;
	int toplam=0;
	for(int i=1; i<=sayi; i++)
		toplam = toplam + i * i;
		printf("%d\n", toplam);
		
	return 0;
}