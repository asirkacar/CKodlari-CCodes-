#include <stdio.h>


int main()
{
	int sayi1, sayi2, sayi3, carpim, karesiIlkSayi, karesiIkinciSayi;
	double bolumu, ortalamasi;
	char ad[20];
	
	printf("Ad Girin:");
	scanf("%s", &ad);
	printf("Girilen Ad: %s\n", ad);
	printf("-----------------------------\n");
	
	printf("Ilk Sayi: ");
	scanf("%d", &sayi1);
	printf("Ikinci Sayi: ");
	scanf("%d", &sayi2);
	printf("Ucuncu Sayiyi Girin: ");
	scanf("%d", &sayi3);
	
	carpim = sayi1 * sayi2;
	karesiIlkSayi = sayi1 * sayi1;
	karesiIkinciSayi = sayi2 * sayi2;
	bolumu = (double) sayi1 / sayi2; //BUNU BURAYA YAZMASAYDIK SAY�1 SAY�2 DE�ER� �NT OLDU�U ���N �NT DE�ER VERECEKT�
									//SONUC DE���KEN�N�N DOUBLE OLMASI B��EY DE���T�RMEYECEKT� BU �EK�L D�N���M YAPTIK
	ortalamasi = (double) (sayi1 + sayi2 + sayi3) / 3;
	
	printf("Ilk Sayi Karesi: %d\n", karesiIlkSayi);
	printf("Ikinci Sayi Karesi: %d\n", karesiIkinciSayi);
	printf("Carpimlari: %d\n", carpim);
	printf("Bolumu: %lf\n", bolumu);
	printf("Ortalamasi: %lf\n", ortalamasi);
	printf("-----------------------------\n");
/*
		KLAVYEDEN �STEN�LEN KADAR SAYI G�R�S� ALIP ORTALAMASINI ALAN PROGRAM
*/
	int adet, giris, toplam=0, baslangic=1;
	double sonuc;
	
	printf("Kac Adet Sayi Girilcek:");
	scanf("%d", &adet);
	
	for(baslangic; baslangic<=adet; baslangic++)
	{
		printf("%d. Sayiyi Girin: ", baslangic);
		scanf("%d", &giris);
		toplam = giris + toplam;
	}
	sonuc = (double) toplam / adet;
	printf("%d Kadar Sayinin Ortalamasi: %lf", adet, sonuc);
	
}
