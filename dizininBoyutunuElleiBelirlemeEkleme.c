#include <stdio.h>

int main()
{
	int n;
	printf("Dizi Eleman Sayisini Girin: "); scanf("%d", &n);
	
	int dizi[n],i;
	for (i=0; i<sizeof(dizi)/sizeof(int); i++)
	{
		printf("%d. indisin elemaný Girin:", i);
		scanf("%d", &dizi[i]);
	}
	printf("-----------------------\n");
	
	for (i=0; i<sizeof(dizi)/sizeof(int); i++)
		printf("%d. eleman: %d\n", i, dizi[i]);
}
