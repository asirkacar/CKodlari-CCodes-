#include <stdio.h>
#include <string.h>


int main()
{
	char metin[100];
	int uzunluk;
	printf("Metni Girin: "); gets(metin);
	
	uzunluk = strlen(metin);
	printf("%d", uzunluk);
}
