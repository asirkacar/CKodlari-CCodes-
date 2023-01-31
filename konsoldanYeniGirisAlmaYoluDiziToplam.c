#include <stdio.h>

int main()
{
	int dizi[4], toplam, i;
	
	printf("4 Tane Deger Girin Bosluklu: ");
	scanf("%d %d %d %d", &dizi[0], &dizi[1], &dizi[2], &dizi[3]);
	

	toplam = dizi[0] + dizi[1] + dizi[2] + dizi[3];
	printf("Toplam: %d", toplam);
}
