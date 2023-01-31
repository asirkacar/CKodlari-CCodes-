#include <stdio.h>

void asal(int a)
{
	int i,sayac=0;
	
	for (i=2; i<a; i++)
	{
		if (a%i==0)
			sayac++;
	}
	if (a==2)
		sayac++;
	if (sayac>0)
		printf("%d Sayisi Asal degil\n", a);
	else
		printf("%d Sayisi Asal\n", a);
}

int main()
{
	int sayi;
	printf("Sayiyi Girin: "); scanf("%d", &sayi);
	
	asal(sayi);
}
