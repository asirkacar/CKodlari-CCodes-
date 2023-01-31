#include <stdio.h>

int main()
{
	int ogrenciler[10][3],ort[10],i,j;
	
	for (i=0; i<10; i++)
	{
		for (j=0; j<3; j++)
		{
			if (j==0)
			{
				printf("%d. Ogrencinin Numarasi: ", i+1); scanf("%d", &ogrenciler[i][j]);
			}
			else if (j==1)
			{
				printf("%d Ogrencinin Vize Notu: ", i+1); scanf("%d", &ogrenciler[i][j]);
			}
			else if (j==2)
			{
				printf("%d Ogrencinin Final Notu: ", i+1); scanf("%d", &ogrenciler[i][j]);
			}
		}
		ort[i] = ogrenciler[i][1]*0.4 + ogrenciler[i][2]*0.6;
	}
	printf("Girisler:\n");
	for (i=0; i<10; i++)
	{
		for (j=0; j<3; j++)
			printf("%d", ogrenciler[i][j]);
		printf("\n");
	}
	printf("Sonuclar\n");
	for (i=0; i<10; i++)
		printf("%d Ogrencinin Notu: %d\n", ogrenciler[i][0], ort[i]);
	
	
}
