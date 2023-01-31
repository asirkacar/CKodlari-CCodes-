#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, x1, x2, d;
	
	printf("a: "); scanf("%lf", &a);
	printf("b: "); scanf("%lf", &b);
	printf("c: "); scanf("%lf", &c);
	
	d = b*b-4*a*c;
	
	if (d<0) printf("Sanal Kok Var/Yok");
	else if (d==0)
	{
		x1 = (-b)/(2*a);
		printf("Tek Kok Var x1: %lf", x1);
	}
	else if (d>0)
	{
		x1 = (-b-sqrt(d))/(2*a);
		x2 = (-b+sqrt(d))/(2*a);
		printf("x1: %lf\t x2: %lf", x1, x2);
	}
	return 0;
	
}
