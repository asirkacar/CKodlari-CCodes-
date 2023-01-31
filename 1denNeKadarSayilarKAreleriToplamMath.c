#include <stdio.h>
#include <math.h>

int main()
{
	int i,toplam=0,n;
	printf("N: "); scanf("%d", &n);
	for (i=1; i<=n; i++)
		toplam = toplam + pow(i,2);
	printf("Toplam: %d", toplam);
}
