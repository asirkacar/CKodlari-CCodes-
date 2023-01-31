#include <stdio.h>

main()
{
	int i, j, yardimci, dizi[]={4,1,9,5,2,8,6,0,3,7}, l;
	
	l = sizeof(dizi)/sizeof(int);
	printf("Dizi uzunluðu %d\n", l);
	
	for (i=0; i<l-1; i++)
	{
		for (j=i+1; j<l; j++) 
		{
			if(dizi[i]>dizi[j])	//eger burasi < olursa buyukten kucuge siraliyo
			{
				yardimci = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = yardimci;
			}
		}
	}
	
	for (i=0; i<l; i++) printf("%d\t", dizi[i]);
}
