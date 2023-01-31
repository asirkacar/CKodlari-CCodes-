#include <stdio.h>
//(C * 1.8) + 32 santigrattan fahrenayta cevrim
//1den 100e kadar santigratın fahrenayt karşılığı
int main()
{
	double c, f, faCevir;
	
	for (; c<=100; c++)
	{
		faCevir = (c*1.8) + 32;
		printf("%.2lfC = %.3lfF\n", c, faCevir);
	}
}
