#include <stdio.h>

int main()
{
	int dizi[3][2], i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d Satirin %d Girisi: ",i,j); scanf("%d", &dizi[i][j]);
		}
	}
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
			printf("%d", dizi[i][j]);
		if(j%2==0)  printf("\n");
	}
}
