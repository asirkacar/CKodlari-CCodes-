#include <stdio.h>

int main()
{
	int rastgele, sayilar[6], i,a=0;

	while(a<1) //a 1den k���k oldu�u s�rece
	{
		for (i=0; i<6; i++)
		{
			sayilar[i]=rand()%9;
			printf("%d\t", sayilar[i]);
		}
		printf("Devamm�:"); scanf("%d", &a);
		
	}
}
