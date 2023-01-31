#include <stdio.h>
#include <math.h>

#define pi 3.1415

//Formül a*pi*r/360

int main()
{
	double a, r, alan, dilimAlan;
	
	printf("a Acisi: "); scanf("%lf", &a);
	printf("Yari Cap: "); scanf("%lf", &r);
	
	alan = pi*r*r;
	dilimAlan = a*pi*r/360;
	
	printf("Alan: %lf\t Dilim Alan: %lf", alan, dilimAlan);
	
}
