#include <stdio.h>

void kare(int a)
{
	int kare;
	kare=a*a;
	printf("%d", kare);
}

void main()//BU ÞEKÝL TANIMLANIRSA ISLETIM SISTEMINE BI DEGER GONDERMEZ
			//ANA FONKSIYON BI DEGER GONDERMEYECEKSE BU VIOD TANIMLANIR
{
	int a;
	printf("Giris: ");
	scanf("%d", &a);
	kare(a);
}
