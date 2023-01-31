#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int sayi, rasSayi;
	
	//BENZERSIZ SAYI URETMEK ICIN
	srand(time(NULL));
	
	rasSayi = rand()%10+1;
	
	printf("%d\n", rasSayi);
	
	do
	{
		printf("Sayi Girin: "); scanf("%d", &sayi);
		if (sayi<rasSayi) printf("Girilen Sayi Kucuk\n");
		if (sayi>rasSayi) printf("Girilen Sayi Buyuk\n");
	}while (sayi!=rasSayi);
	
	printf("Tebrikler Buldun. Girilen: %d\t Random Sayi: %d", sayi, rasSayi);
}
