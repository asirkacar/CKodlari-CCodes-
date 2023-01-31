#include <stdio.h>

int main()
{
	int a,toplam=0;
	
	for (a=1; a<=10; a++)
	{
		if (a==5)
		{
			continue;
		}
		toplam = toplam + a;
	}
	printf("%d\n", toplam);
}
