#include <stdio.h>

int main()
{
	int sayac=0, toplam=0, sayi;
	
	printf("Sayiyi Girin:");
	scanf("%d", &sayi);
	
	dongu:
	sayac++;
	toplam = toplam + sayac;
	if (sayac < sayi)
	{
		goto dongu;
	}
	printf("Toplam: %d", toplam);
}
