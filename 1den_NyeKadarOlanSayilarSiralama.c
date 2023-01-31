#include <stdio.h>

int main()
{
	int sayi, sayac=0;
	
	printf("Sayi: ");
	scanf("%d", &sayi);
	
	dongu:
	++sayac;
	printf("%d", sayac);
	if (sayi>sayac)
		goto dongu;
}
