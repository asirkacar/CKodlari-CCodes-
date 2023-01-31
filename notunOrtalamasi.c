#include <stdio.h>

int main()
{
	int n1, n2, n3;
	double ort;
	
	printf("0-100 Arasi Deger Girin\n");
	
	n1_Giris:
	printf("Ilk Notu Girin: ");
	scanf("%d", &n1);
	if (n1<0 || n1>100)
		goto n1_Giris;
	
	n2_Giris:
	printf("Ikinci Notu Girin: ");
	scanf("%d", &n2);
	if (n2<0 || n2>100)
		goto n2_Giris;
	
	n3_Giris:
	printf("Ucuncu Notu Girin: ");
	scanf("%d", &n3);
	if (n3<0 || n3>100)
		goto n3_Giris;
	
	ort = (double)(n1 + n2 + n3) / 3;
	
	printf("Ortalama: %f", ort);
}
