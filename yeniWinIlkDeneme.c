#include <stdio.h>

int main()
{
	int ilkSayi, ikinciSayi, sonuc;
	char karakter;
	printf("hello world\n");
	printf("Ilk Degeri Girin: ");
	scanf("%d", &ilkSayi);
	printf("Ikinci Degeri Girin: ");
	scanf("%d", &ikinciSayi);
	
	if(ilkSayi>ikinciSayi)
	{
		sonuc = ilkSayi * ikinciSayi;
		printf("Sonuc: %d\n", sonuc);
	}
	else
	{
		sonuc = ikinciSayi - ilkSayi;
		printf("Sonuc: %d\n", sonuc);
	}
	// GÝRÝLEN HARF KÜÇÜKSE BÜYÜK BÜYÜKSE KÜÇÜK YAPAN KOD
	printf("Bir Karakter Girin: ");
	scanf("%s", &karakter);
	printf("Eski Karakter: %c\n", karakter);
	
	
	if (karakter<=90)
	{
		karakter = karakter + 32;
		printf("Yeni Karakter: %c", karakter);
	}
	else
	{
		karakter = karakter - 32;
		printf("Yeni Karakter: %c", karakter);
	}
	getchar();
	return 0;
}
