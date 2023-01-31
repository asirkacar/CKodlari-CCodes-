#include <stdio.h>

int basamakHesapla(int a)
{
	int sayac=1;
	while(a>10)
	{
		a = a/10;
		sayac++;
		
	}
	return sayac;
}


main()
{
	int sayi;
	
	printf("Sayiyi Girin: "); scanf("%d", &sayi);

	printf("%d basamaklidir", basamakHesapla(sayi));
}
