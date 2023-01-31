#include <stdio.h>

int topla(int x)
{
	int i=1, topla=0;
	
	for (i=1; i<=x; i++)
	{
		topla = topla + i;
	}
	return topla;
}
void main()
{
	int a;
	printf("Giris: "); scanf("%d", &a);
	printf("%d", topla(a));
}
