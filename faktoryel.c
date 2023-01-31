#include <stdio.h>

int main()
{
	int sayac=0, fak=1, sayi;
	
	printf("Sayi Giris: ");
	scanf("%d", &sayi);
	
	dongu:
	sayac++;
	fak = fak * sayac;
	if (sayac < sayi)
		goto dongu;
	printf("Faktoryel: %d", fak);
}
