#include <stdio.h>

int faktoryel(int x)
{
	int fak=1,i;
	
	for (i=1; i<=x; i++)
	{
		fak = fak * i;
	}
	return fak;
}

int main()
{
	int a;
	printf("Giris: "); scanf("%d", &a);
	printf("%d", faktoryel(a));
}
