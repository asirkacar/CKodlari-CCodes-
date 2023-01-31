#include <stdio.h>

double cemberAlan(double r)
{
	#define pi 3.14
	
	double alan;
	alan=pi*r*r;
	return alan;
}
int main()
{
	double yariCap, sonuc;
	printf("Yaricapi Gir: "); scanf("%lf", &yariCap);
	sonuc = cemberAlan(yariCap);
	printf("Sonuc: %.02lf", sonuc);
}
