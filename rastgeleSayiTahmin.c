#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int rastSayi, giris, sayac=0;
	
	srand(time(NULL));
	rastSayi = 1+rand()%10;
	printf("%d\n", rastSayi);
		
	do
	{
		printf("Sayi Girin: "); scanf("%d", &giris);
		if(giris < rastSayi) printf("Girdigin Sayi Kucuk\n");
		if(giris > rastSayi) printf("Girdigin Sayi Buyuk\n");
		sayac++;
	}while(giris != rastSayi);
	
	printf("Tebrikler %d Adýmda Buldun", sayac);

}
