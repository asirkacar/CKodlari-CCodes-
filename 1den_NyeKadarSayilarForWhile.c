#include <stdio.h>

int main()
{
	int n, i=1;
	
	printf("Giris: "); scanf("%d", &n);
	printf("----------------FOR------------------\n");
	for(; i<=n; i++)
		printf("%d\n", i);
		
	printf("----------------WHILE------------------\n");
	i=1;
	while(i<=n)
	{
		printf("%d\n", i);
		i++;
	}
}
