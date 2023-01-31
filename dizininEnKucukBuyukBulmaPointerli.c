#include <stdio.h>
#include <time.h>

main()
{
	int i, n, kontrol=0, *k;
	srand(time(NULL));
	
	printf("N: "); scanf("%d", &n);
	
	int dizi[n];
	
	k = &kontrol;
	
	for (i=0; i<n; i++) dizi[i] = rand();
	for (i=0; i<n; i++) printf("Dizinin %d. Elemani %d\n", i, dizi[i]); 
	*k = dizi[0];
	
	for (i=0; i<n; i++)
	{
		if (dizi[i]<=*k) *k=dizi[i];
	}
	printf("Dizinin En Kucuk Elemani: %d\n", *k);
	
	for (i=0; i<n; i++)
	{
		if (dizi[i]>=*k) *k=dizi[i];
	}
	printf("Dizinin En Buyuk Elemani: %d", *k);
}
