#include <stdio.h>
#include <time.h>

main()
{
	int i, n;
	
	srand(time(NULL)); //farkl� sayi �retmesi i�in
	printf("N: "); scanf("%d", &n);
	
	int rSayi[n];
	
	for (i=0; i<n; i++)	rSayi[i] = rand();
	
	for (i=0; i<n; i++)	printf("Dizinin %d. Elemani\t Degeri: %d\n", i, rSayi[i]);
}
