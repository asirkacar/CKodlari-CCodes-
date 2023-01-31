#include <stdio.h>
//	BASLANGIC ÝLE BÝTÝS ARASINDAKÝ SAYILARI YAZDIR ARTIÞ MÝKTARÝ DA ELLE GÝRÝLSÝN
int main()
{
	int baslangic, bitis, artis;
	
	printf("Baslangic: ");	scanf("%d", &baslangic);
	printf("Bitis: ");	scanf("%d", &bitis);
	printf("Artis: ");	scanf("%d", &artis);
		
	for (baslangic; baslangic<=bitis; baslangic += artis)
	{
		printf("%d", baslangic);
	}
}
