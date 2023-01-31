#include <stdio.h>

int main()
{
	int satir, sutun;
	printf("Kac Satir: "); scanf("%d", &satir);
	printf("Kac Sutun: "); scanf("%d", &sutun);
	
	int dizi[satir][sutun],i,j;
	
	for (i=0; i<satir; i++)
	{
		for (j=0; j<sutun; j++)
		{
			printf("%d Satir %d Sutun Girisi: ",i,j); scanf("%d", &dizi[i][j]);
		}
	}
	
	for (i=0; i<satir; i++)
	{
		for (j=0; j<sutun; j++)
			printf("%d", dizi[i][j]);
		printf("\n");
	}
}
