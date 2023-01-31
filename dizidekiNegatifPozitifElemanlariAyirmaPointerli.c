#include <stdio.h>

main()
{
	int sayi, n, i, *psayacp, sayacp=0, *psayacn, sayacn=0, *psayacz, sayacz=0;
	
	printf("Kac Sayi Girilcek: "); scanf("%d", &n);
	int dizi[n];
	
	for (i=0; i<n; i++)
	{
		printf("%d. Sayiyi Gir: ", i+1); scanf("%d", &sayi);
		dizi[i] = sayi;
	}
	for (i=0; i<n; i++) printf("%d\n", dizi[i]);
	
	psayacp = &sayacp;
	psayacn = &sayacn;
	psayacz = &sayacz;
	
	for (i=0; i<n; i++)
	{
		if (dizi[i]<0) *psayacn=*psayacn+1;
		else if (dizi[i]>0) *psayacp=*psayacp+1;
		else *psayacz=*psayacz+1;
	}
	printf("Dizideki 0 lar %d tane\tPoazitifler %d tane\tNegatifler %d tane", sayacz, sayacp, sayacn);
}
