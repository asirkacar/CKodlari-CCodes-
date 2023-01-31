#include <stdio.h>
#include <string.h>

int main()
{
	char dizi1[100], dizi2[100];
	printf("Ilki: "); gets(dizi1);
	printf("Ikinci: "); gets(dizi2);
	
	strcat(dizi1,dizi2); //dizi1e dizi2yi ekledik
	printf("%s", dizi1);
}
