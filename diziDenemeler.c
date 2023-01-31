#include <stdio.h>

int main()
{
	/*
	char ad[50];
	printf("Adini Gir: "); scanf("%s", ad);
	printf("Adiniz: %s\n", ad);*/
	//GETS
	char ad2[50], soyad[20];
	printf("Adinizi Girin2: "); gets(ad2);
	printf("SoyAdinizi Girin2: "); gets(soyad);
	printf("Adiniz2: %s\n", ad2);
	puts(ad2);
	puts(soyad);
}
