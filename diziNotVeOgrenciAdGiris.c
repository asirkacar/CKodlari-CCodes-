#include <stdio.h>
//OLMADI
//ÝSÝMLERÝ VE NOTLARI ALACAN ÝKÝ BOYUTLU MATRÝS SONRA BUNLARI YAZDIRACAN
//NOTLAR ALINIR DA ÝSÝMLER ALINIP OKUNAMIYO
int main()
{
	int dizi[3][1],i,j;
	char isim[3]={'a','b','c'};
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<1; j++)
		{
			scanf("%d", &dizi[i][j]);
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<1;j++)
		{
			printf("%d", dizi[i][j]);
		}	
		printf("\n");
	}
	for (i=0; i<3; i++)
	{
		printf("%c", isim[i]);
	}
			
}
