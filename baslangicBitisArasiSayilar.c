#include <stdio.h>
//	BASLANGIC �LE B�T�S ARASINDAK� SAYILARI YAZDIR ARTI� M�KTAR� DA ELLE G�R�LS�N
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
