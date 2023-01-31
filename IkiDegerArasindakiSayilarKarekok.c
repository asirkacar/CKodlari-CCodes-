#include <stdio.h>
#include <math.h>

int main()
{
	double x,y;
	printf("Ilk Sayiyi Girin: "); scanf("%lf", &x);
	printf("Ikinci Sayiyi Girin: "); scanf("%lf", &y);
	
	for (; x<=y; x++)
		printf("%lf Sayisinin Karekoku %lf\n", x, sqrt(x));
}
