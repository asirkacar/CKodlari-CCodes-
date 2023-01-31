#include <stdio.h>

int main()
{
	int x, y, toplam=0;
	
	printf("Sayi Gir: ");
	scanf("%d", &x);
	printf("Sayi Gir: ");
	scanf("%d", &y);
	toplam = x + toplam;
	dongu:
	x++;
	toplam = x + toplam;
	if (y>x)
		
		goto dongu;
		
	printf("%d", toplam);
}
