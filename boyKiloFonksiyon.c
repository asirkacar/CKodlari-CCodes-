#include <stdio.h>


void boyKilo(double boy, double kilo)
{
	double sonuc;
	if (boy>100)
	{
		double sonuc;
		boy=boy - 100;
		sonuc = boy - kilo;
		if (sonuc<=10 && sonuc>=-10)
		{
			printf("Normalsiniz");
		}
		else
			printf("Fazla");
	}
	else
	{
		boy = boy * 100;
		boy = boy - 100;
		sonuc = boy - kilo;
		if (sonuc<=10 && sonuc>=-10)
		{
			printf("Normalsiniz");
		}
		else
		{
			printf("Fazla");
		}
	}
}

int main()
{
	double a, b;
	printf("Boy Girin: "); scanf("%lf", &a);
	printf("Kilo Girin: "); scanf("%lf", &b);
	boyKilo(a,b);
}
