#include <stdio.h>

int main()
{
	int not[10],i,toplam=0,bdeger=0,kdeger=100;
	double ort;
	printf("Notlari Girin\n");
	for(i=0; i<10; i++)
	{
	
		scanf("%d", &not[i]);
		if (not[i]>bdeger)
			bdeger=not[i];
		else if(not[i]<kdeger)
			kdeger=not[i];
	}
	for (i=0; i<10; i++)
		toplam = not[i] + toplam;
	ort = (double) toplam / 10;
	printf("Ortalama: %lf\n", ort);
	printf("En Buyuk Not: %d\t En Kucuk Not: %d", bdeger, kdeger);
}
