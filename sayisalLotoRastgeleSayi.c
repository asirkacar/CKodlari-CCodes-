#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sayilar[6],i,j,sayac,a,sayi;

	for (i=0; i<6; i++)
	{
		a=1;
		while (a==1)
		{
			sayi=1+rand()%49;
			for(j=0; j<6; j++)
			{
				if (sayi==sayilar[j])	sayac++;
			}
			if (sayac>0)	a=1;
			else
			{
				sayilar[i]=sayi;
				a=2;
			}
			
		}
	}
	for (i=0; i<6; i++)
		printf("%d ", sayilar[i]);
}
