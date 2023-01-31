#include <stdio.h>
#include <time.h>

main()
{
	int n, i;
	
	srand(time(NULL));
	
	printf("Dizi Kac Elemanli Olcak: "); scanf("%d", &n);
	
	int a[n], b[n], c[n];
	
	for (i=0; i<n; i++)
	{
		a[i] = 1+rand()%15;
		b[i] = 1+rand()%15;
	}
	for (i=0; i<n; i++)
	{
		printf("A Dizisinin %d. Elemani %d\n", i, a[i]);
		printf("B Dizisinin %d. Elemani %d\n", i, b[i]);
	}
	printf("------------------------------\n");
	printf("------------------------------\n");
	for (i=0; i<n; i++) c[i] = a[i]+b[i];
	for (i=0; i<n; i++) printf("C Dizisi %d. Elemani %d\n", i, c[i]); 
}
