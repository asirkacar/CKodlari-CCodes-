#include <stdio.h>
#define pi 3.14
int main()
{
	double r, alan, cevre;
	
	r_Giris:
	printf("r: ");
	scanf("%lf", &r);
	
	if (r<=0)
	{
		printf("Pozitif r girin\n");
		goto r_Giris;
	}
	alan = pi * r * r;
	cevre = 2 * pi * r;
	
	printf("Alan: %lf\n", alan);
	printf("Cevre: %lf", cevre);
	 
}
