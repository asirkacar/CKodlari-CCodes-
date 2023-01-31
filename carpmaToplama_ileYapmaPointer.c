#include <stdio.h>

main()
{
	int toplam=0, *pa, a, b, i;
	
	printf("AxB\n");
	printf("A: "); scanf("%d", &a);
	printf("B: "); scanf("%d", &b);
	
	pa = &a;
	
	for (i=1; i<=b; i++)
	{
		toplam=*pa+toplam;
	}
	printf("%d", toplam);
}
