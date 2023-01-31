#include <stdio.h>
#include <math.h>

int main()
{
	double x,y;
	
	printf("Sayi: "); scanf("%lf", &x);
	printf("Kuvveti: "); scanf("%lf", &y);
	
	printf("%.1lf Sayisinin %.1lf. Kuvveti %.1lf", x,y,pow(x,y));
}
