#include <stdio.h>

void carpmaToplama(int a, int b)
{
	int sonuc=0,i;
	for (i=1; i<=b; i++)
		sonuc = sonuc + a;
	printf("Sonuc: %d x %d = %d", a,b,sonuc);
}

int main()
{
	int sayi, carpilacakSayi;
	printf("Sayi1: "); scanf("%d", &sayi);
	printf("Sayi2: "); scanf("%d", &carpilacakSayi);
	carpmaToplama(sayi,carpilacakSayi);
}
