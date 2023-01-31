#include <stdio.h>


double ucgenAlan(double taban, double yukseklik)
{
	double alan;
	alan=taban*yukseklik/2;
	return alan;
}
int main()
{
	double taban, yuk;
	printf("Taban Gir: "); scanf("%lf", &taban);
	printf("Yukseklik Girin: "); scanf("%lf", &yuk);
	printf("Sonuc: %.02lf", ucgenAlan(taban, yuk));
}
