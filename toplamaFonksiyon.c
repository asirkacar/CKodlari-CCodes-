#include <stdio.h>

double topla(double a, double b)
{
	double topla = a + b;
	return topla;
}
int main()
{
	double x,y;
	printf("Giris1: "); scanf("%lf", &x);
	printf("Giris2: "); scanf("%lf", &y);
	
	printf("%lf", topla(x,y));
}
