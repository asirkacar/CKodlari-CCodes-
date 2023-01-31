#include <stdio.h>
//METÝNDEKÝ BÜYÜK HARFLERÝ KÜÇÜK KÜÇÜKLERÝ BÜYÜK YAPAN KOD
int main()
{
	int i=0;
	char dizi[100];
	
	printf("yazýyý girin: ");
	gets(dizi);
	
	while(dizi[i]!='\0')
	{
		if(dizi[i]>=97)
		{
			dizi[i] -=32;
		}
		else
		{
			dizi[i] +=32;
		}
		i++;
	}
	
	
	printf("Veri: %s", dizi);
	getchar();
}
