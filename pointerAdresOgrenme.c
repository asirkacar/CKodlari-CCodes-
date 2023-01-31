#include <stdio.h>


int main()
{
	char harf='a';

	//printf("Giris:"); scanf("%c", &harf);

	printf("deger: %c\n", harf);
	printf("adres: %X\n", &harf);	//normal deðiþkende adres göstermek için & iþareti kullanýlýr ama gostericilerde kullanýlmaz
	
	char *gosterici=&harf;
	
	printf("deger gosterici: %X\n", gosterici); //BURDA harf isimli deðiþkenin adresini gosterici adlý degiskene verdik kendisini deðil sadece adresini
	
	gosterici++; //gosterici adresini 1 artýrdýk
	printf("Sonraki Gosterici degeri: %X\n", gosterici); 
	
	gosterici=gosterici+4; //gosterici adresini 4 artýrdýk
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
		printf("%c ", *(harfler2+i)); //GOSTERÝCÝ KULLANARAK DÝZÝNÝN ELEMANLARINI YAZDIRDIK
	l=sizeof(ad)/sizeof(char)-1; //karakter dizisi olduðu için char dedik bu seferde
	printf("\n");
	for (i=0; i<l; i++)
		printf("%c", *(ad+i));
	printf("\n");
	
	for (i=0; i<l; i++)
		printf("%X\n", (ad+i)); //burdada adreslerini yazdýrdýk
	
	
	
}
