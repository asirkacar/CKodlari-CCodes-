#include <stdio.h>

int main()
{
	int sayi, sonuc;
	
	printf("Karesi Alinacak Sayiyi Girin:");
	scanf("%d", &sayi);
	
	if(sayi>=0)
	{
		sonuc = sayi * sayi;
		printf("Karesi: %d", sonuc);
	}
	else
	{
		printf("Pozitif Deger Girilmedi");
	}
		
}
