#include <stdio.h>
#include <math.h>
#define pi 3.14


int main()
{
	double r,alan,cevre;
	printf("YariCap Gir:"); scanf("%lf", &r);
	alan = pi*pow(r,2);
	cevre = 2*pi*r;
	printf("Alan: %.2lf\t Cevre: %.2lf", alan,cevre);
	
}
