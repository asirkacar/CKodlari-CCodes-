//TAHMÝN OYUNU

#include <stdio.h>
#define sayi 5
int main()
{
	int sayac, giris;
	printf("0 ile 10 Arasidai Sayiyi Bulun\n");
	giris:
	printf("Tahmin: ");
	scanf("%d", &giris);
	sayac++;
	if (giris != sayi)
		goto giris;
	else
	{
		if (sayac == 1)
			printf("Ilk Denemede Bildin Aferin... :D");
		else
			printf("Dogru %d. Denemede Bildin. Sayi: %d", sayac, sayi);
	}
}
