#include <stdio.h>
#include <time.h>

main()
{
	double sonuc=0, *portalama, ortalama=0;
	int n, i;
	
	srand(time(NULL));
	
	printf("N: "); scanf("%d", &n);
	portalama = &ortalama;
	int rSayi[n];

	
	for (i=0; i<n; i++) rSayi[i] = 1+rand()%10; //rastegele sayi üretme
	for (i=0; i<n; i++) printf("%d\t%d\n", i, rSayi[i]); //diziyi yazdýrma
	for (i=0; i<n; i++)	*portalama = rSayi[i] + *portalama;

	sonuc = (double)(ortalama / n);
	printf("ortalama: %lf", sonuc);
}
