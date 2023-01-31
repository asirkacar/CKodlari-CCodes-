#include <stdio.h>

void ciftSayi(int a)
{
	int i;
	for (i=1; i<=a; i++)
	{
		if (i%2==0)
			printf("%d\n", i);
	}
}

int main()
{
	int a;
	printf("Giris: "); scanf("%d", &a);
	
	ciftSayi(a);
}
