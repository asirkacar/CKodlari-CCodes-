#include <stdio.h>

int main()
{
	int n, i=1, toplam=0;
	
	printf("Giris: ");
	scanf("%d", &n);
	
	printf("----------FOR-------------\n");
	for(; i<=n; i++)
		toplam = toplam + i;
	printf("%d\n", toplam); 
	
	printf("----------WHILE-------------\n");
	toplam = 0; i = 1;
	
	while (i<=n)
	{
		toplam = toplam + i;
		i++;
	}
	printf("%d\n", toplam);
}
