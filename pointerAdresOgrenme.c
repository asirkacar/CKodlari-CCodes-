#include <stdio.h>


int main()
{
	char harf='a';

	//printf("Giris:"); scanf("%c", &harf);

	printf("deger: %c\n", harf);
	printf("adres: %X\n", &harf);	//normal de�i�kende adres g�stermek i�in & i�areti kullan�l�r ama gostericilerde kullan�lmaz
	
	char *gosterici=&harf;
	
	printf("deger gosterici: %X\n", gosterici); //BURDA harf isimli de�i�kenin adresini gosterici adl� degiskene verdik kendisini de�il sadece adresini
	
	gosterici++; //gosterici adresini 1 art�rd�k
	printf("Sonraki Gosterici degeri: %X\n", gosterici); 
	
	gosterici=gosterici+4; //gosterici adresini 4 art�rd�k
	printf("Sonraki Gosterici degeri: %X\n", gosterici); 
	
	printf("-----------------------------------------------\n");
	
	char harfler2[]={'a','b','c'};
	printf("Dizinin ilk elaman adresi: %X\n", &harfler2[0]);
	printf("Dizinin ikinci elaman adresi: %X\n", &harfler2[1]);
	printf("dizinin Adi: %X\n", harfler2); 
	printf("-----------------------------------------------\n");
	char ad[]="fahrettin";
	int i,l;
	
	for (i=0; i<3; i++)
		printf("%c ", *(harfler2+i)); //GOSTER�C� KULLANARAK D�Z�N�N ELEMANLARINI YAZDIRDIK
	l=sizeof(ad)/sizeof(char)-1; //karakter dizisi oldu�u i�in char dedik bu seferde
	printf("\n");
	for (i=0; i<l; i++)
		printf("%c", *(ad+i));
	printf("\n");
	
	for (i=0; i<l; i++)
		printf("%X\n", (ad+i)); //burdada adreslerini yazd�rd�k
	
	
	
}
