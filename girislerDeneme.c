#include <stdio.h>
#include <stdlib.h>

#define pi 3.14 
//üst taraf sabit değişken
//pi*r*r alan
//2*pi*r çevre
//eğer float değişken yazdırcakcan %f kotman lazım double için %lf  "l"=L nin küçük harfi

int main()
{
	int dikUzun, dikKisa, dikAlan, dikCevre;
	double r, cemberAlan, cemberCevre;
	
	printf("Dikdortgen Kisa Kenarı Girin: ");
	scanf("%d", &dikKisa);
	
	printf("Dikdortgen Uzun Kenari Girin: ");
	scanf("%d", &dikUzun);
	
	printf("Cember Yaricapi Girin: ");
	scanf("%lf", &r);
	
	dikAlan = dikKisa * dikUzun;
	dikCevre = (2 * dikKisa) + (2 * dikUzun);
	cemberAlan = pi * r * r;
	cemberCevre = 2 * pi * r;
	
	printf("Dikdortgen Alan: %d\n", dikAlan);
	printf("Dikdortgen Cevre: %d\n", dikCevre);
	printf("Cember Alan: %lf \n", cemberAlan);
	printf("Cember Cevre: %lf", cemberCevre);
	
	return 0;
	
	
}