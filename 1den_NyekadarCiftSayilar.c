#include <stdio.h>

int main()
{
	int sayac=-1, sayi;
	
	printf("Sayi: ");
	scanf("%d", &sayi);
	
	dongu:
	sayac++;
	
	
	if (sayac < sayi)
	{
		if (sayac%2==0)
			printf("%d", sayac);
		goto dongu;
	}
		
			
}
