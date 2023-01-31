#include <stdio.h>

int main()
{
	int ogrenciler[5],i;
	for (i=0; i < sizeof(ogrenciler) / sizeof(int); i++)
	{
		printf("%d. Ogrencinin Notu: ", i+1);
		scanf("%d", &ogrenciler[i]);
	}
	printf("----------------------------\n");
	for (i=0; i < sizeof(ogrenciler)/sizeof(int); i++)
		printf("%d. Ogrencinin Notu: %d\n", i+1, ogrenciler[i]);
}
