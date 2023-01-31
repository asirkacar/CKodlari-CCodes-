#include <stdio.h>

void kuvvet(int sayi, int kuvvet)
{
	int sonuc=sayi, i;
	if (kuvvet==1)
		printf("%d", sayi);
	else
	{
		for (i=1; i<kuvvet; i++)
		{
			sonuc = sayi * sonuc;
		}
		printf("%d", sonuc);
	}
}
int main()
{
	int a,b;
	printf("Sayi: "); scanf("%d", &a);
	printf("Kuvvet: "); scanf("%d", &b);
	kuvvet(a,b);
}
