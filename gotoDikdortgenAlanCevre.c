#include <stdio.h>

int main()
{
	int uzun, kisa, alan, cevre;
	
	uzun_Giris:
	printf("Uzun Kenari Girin: ");
	scanf("%d", &uzun);
	if (uzun<=0)
	{
		printf("Pozitif Degerler Girin\n");
		goto uzun_Giris;
	}
	
	kisa_Giris:
	printf("Kisa Kenari Girin: ");
	scanf("%d", &kisa);
	if (kisa<=0)
	{
		printf("Pozitif Degerler Girin\n");
		goto kisa_Giris;
	}
	
	alan = uzun * kisa;
	cevre = (2 * uzun) + (2 * kisa);
	
	printf("Alan: %d\n", alan);
	printf("Cevre: %d", cevre);
}
