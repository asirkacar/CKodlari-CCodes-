#include <stdio.h>

int main()
{
	int dizi[]={9,4,8,7,5},i,top=0, ort=0;
	
	for (i=0; i<sizeof(dizi)/sizeof(int); i++)
		top=top+dizi[i];
	ort=top/(sizeof(dizi)/sizeof(int));
	printf("Toplam: %d\t Ortalama: %d", top, ort);
}
