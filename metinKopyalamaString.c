#include <stdio.h>
#include <string.h>

int main()
{
	char kaynak[100], hedef[100];
	
	printf("Metin: "); gets(kaynak);
	
	strcpy(hedef, kaynak); //kaynak dizisini hedefe kopyalad�k
	
	printf("Hedef Dizisinin Degeri: %s", hedef);
}
