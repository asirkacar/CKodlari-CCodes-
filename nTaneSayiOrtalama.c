#include <stdio.h>

int main()
{
	int s1, toplam, sayac=0, sayi;
	double ort;
	
	printf("Kac Adet Giris: ");
	scanf("%d", &s1);
	
	dongu:
	printf("%d. Giris: ", sayac+1);
	scanf("%d", &sayi);
	toplam = sayi + toplam;
	sayac++;
	if(s1>sayac)
		goto dongu;
	ort = (double) toplam / s1;
	printf("Ortalama: %lf", ort);
}
