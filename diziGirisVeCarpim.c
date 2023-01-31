#include <stdio.h>

int main()
{
	int a[3][2],b[3][2],c[3][2], i, j;
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("A Icin Sutun Giris: ");
			scanf("%d", &a[i][j]);
			printf("B Icin Sutun Giris: ");
			scanf("%d", &b[i][j]);
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			c[i][j]=a[i][j]*b[i][j];
		}
	}

	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%d", c[i][j]);
		}
		printf("\n");
	}
}
