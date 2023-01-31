#include <stdio.h>

int main ()
{
	int adet, sayi, enbuyuk=0,i,enbuyukdizi=0;
	printf("Kac Adet Girilcek: "); scanf("%d", &adet);
	
	for (i=1; i<=adet; i++)
	{
		printf("%d Sayiyi Girin: ", i); scanf("%d", &sayi);
		if (sayi>=enbuyuk)
			enbuyuk=sayi;
	}
	printf("En Buyuk Sayi: %d\n", enbuyuk);
	
	printf("Dizi Ile\n");
	
	int sayidizi[adet];
	
	for (i=0; i<adet; i++)
	{
		printf("%d. Sayiyi Girin:", i+1); scanf("%d", &sayidizi[i]);
	}
		
	for (i=0; i<=adet; i++)
	{
		if(sayidizi[i]>=enbuyukdizi)
			enbuyukdizi=sayidizi[i];
	}
	printf("En Buyuk Sayi Dizi: %d", enbuyukdizi);
	
	
}
