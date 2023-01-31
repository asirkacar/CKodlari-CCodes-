#include <stdio.h>

main()
{
	
	int durum=1, i, dizi[]={0,1,2,3,4,5,6,7,8}, a;
	
	printf("Giris: "); scanf("%d", &a);
	
	for (i=0; i<9; i++)
	{
		if (a==dizi[i])
		{
			durum=0;
			break;	
		}	
		
		else durum=1;			
	}
	
	if (durum==1) printf("Bulunamadý");
	else printf("Aranan %d. indekste Bulundu", i);
	
	/*
	int a,b;
	printf("sayilar: "); scanf("%d%d", &a,&b);
	printf("a: %d b: %d", a,b);*/
}
