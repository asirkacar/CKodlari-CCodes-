#include <stdio.h>
//BOÞ KOD
char uzunluk(char kelime[20])
{
	int i,l1;
	l1 = (sizeof(kelime)/sizeof(int));
	printf("%d\n", l1);
	return l1;
}

void main()
{
	char kelime[20],l1;
	printf("Kelimeyi Girin: "); scanf("%s", kelime);
	l1 = (sizeof(kelime)/sizeof(int));
	printf("%d\n", uzunluk(kelime));	
	//uzunluk(kelime[20]);
}
