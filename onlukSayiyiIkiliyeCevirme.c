#include <stdio.h>
#include <string.h>

void ikilikCevrim(int onluk)
{
	char kalan[1], ikili[8] = {};
	
	while(onluk>0)
	{
		if(onluk%2==0) kalan[0] = '0';
		else kalan[0] = '1';
		strncat(ikili, kalan, 1); //kalan dizisinin ilk 1karakterini ikilik dizisinin sonuna ekler
		onluk = onluk / 2;
		
	}
	strrev(ikili); //strncat tersrten yazdýrýyodu bunlar tekrar tersine çevirdik düzeldi
	printf("%s", ikili);
	
}
main()
{
	int onluk;
	
	printf("Onluk Sayi: "); scanf("%d", &onluk);
	
	ikilikCevrim(onluk);
}
