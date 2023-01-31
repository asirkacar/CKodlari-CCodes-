#include <stdio.h>

main()
{
	int i, cikarma=0, a, b, *pa, sayac=1, *ps;
	
	printf("A/B\n");
	
	printf("A: "); scanf("%d", &a);
	printf("B: "); scanf("%d", &b);
	
	pa = &a;
	ps = &sayac;
	
	for (i=1; b<a; i++)
	{
		*pa = *pa-b;
		*ps++;
	}
	printf("Sonuc: %d", i);
}
