#include <stdio.h>

int main()
{
	float ilkSayi, ikinciSayi, sonuc;
	char islem, karar;

	
	while (1)
	{
		char a=0;
		printf("Ilk Sayiyi Girin: ");	scanf("%f", &ilkSayi);
		printf("Ikinci Sayiyi Girin: ");	scanf("%f", &ikinciSayi);
		printf("Yapilacak Islemi secin[+,-,*,/]: ");	scanf("%s", &islem);
	
		if (islem == '*')
		{
			sonuc = ilkSayi * ikinciSayi;
			printf("Sonuc: %f\n", sonuc);
			
		}
		else if (islem == '/')
		{
			sonuc = ilkSayi / ikinciSayi;
			printf("Sonuc: %f\n", sonuc);
			
		}
		else if (islem == '+')
		{
			sonuc = ilkSayi + ikinciSayi;
			printf("Sonuc: %f\n", sonuc);
			
		}
		else if (islem == '-')
		{
			sonuc = ilkSayi - ikinciSayi;
			printf("Sonuc: %f\n", sonuc);
			
		}
		while (a<1)
		{
			printf("Cikmak Istiyormusun?[e/h]: ");	scanf("%s", &karar);
			printf("%c\n", karar);
			//Büyük harfli karakterlerin ASCII kodu 65'den başlar, yani A=65, B=66,....Z=90. Yani büyük harfler 65''den başlayıp 90'da bitiyor.
			//Küçük harflerin ASCII kodu da 97'den başlar. Yani a=97,b=98,...z=122
			//Yukarıdaki bilgilere bakıldığında herhangi bir harfin büyük ve küçüğü arasındaki fark 32'dir
			//Yani a=97, A=65 için 97-65=32. Yani büyük harften küçük harfe ulaşman için büyük harfin ASCII kodu üzerine 32 eklemen gerekir.
			if (karar <= 90)
			{
				karar = karar + 32;
			}
			//BİZDE YUKARDAKİ KOD BLOĞUNDA ÖNCE BÜYÜK HARFMİ DİYE KONTROL ETTİK
			//BÜYÜKSE KÜÇÜLTSÜN DİYE 32DEN ÇIKARDIK KÜÇÜK HARFİ DEĞİŞKENE YENİDEN ATADIK
			
			printf("%c\n", karar);
			if (karar == 'e')
			{
				break;
			}
			else if (karar == 'h')
			{
				a = 2;
			}
			else if (karar != 'e' || karar != 'h')
			{
				printf("Yanlis Giris\n");
			}
		}
		if (karar == 'e')
		{
			break;
		}
		
	}
	
}