#include <stdio.h>

int main()
{
	int fak=1,i=1,n;

	printf("Giris: ");
	scanf("%d", &n);
	printf("-----------FOR---------\n");	
	for(; i<=n; i++)
		fak = fak * i;
	printf("Faktoryel: %d\n", fak);
	
	printf("-----------WHILE---------\n");
	fak = 1; i = 1;
	
	while (i<=n)
	{
		fak = fak * i;
		i++;
	}
	printf("Faktoryel: %d", fak);
	
}
