#include <stdio.h>

int main()
{
	int sayac=-1, sayi, sayiGiris;
	
	printf("Kac Tane Giris Olsun: ");
	scanf("%d", &sayi);
	
	dongu:
	sayac++;
	if (sayac < sayi)
	{
		printf("Sayi Gir: ");
		scanf("%d", &sayiGiris);
		printf("%d. Sayi: %d\n", sayac+1, sayiGiris);
		goto dongu;
	}

	
}
