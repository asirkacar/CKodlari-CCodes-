#include <stdio.h>

int main()
{
	int n, n1, toplam=0, i=1;
	double ort;
	
	printf("Giris: ");
	scanf("%d", &n);
	
	printf("-----------FOR---------\n");
	
	for (; i<=n; i++)
	{
		printf("Giris: ");
		scanf("%d", &n1);
		toplam = toplam + n1;
	}
	ort = (double) toplam / n;
	printf("Ort: %lf\n", ort);
	
	printf("-----------WHILE---------\n");
	toplam = 0; i = 1;
	
	while(i<=n)
	{
		printf("Giris: ");
		scanf("%d", &n1);
		toplam = toplam + n1;
		i++;
	}
	ort = (double) toplam / n;
	printf("Ort: %lf", ort);
	
}
