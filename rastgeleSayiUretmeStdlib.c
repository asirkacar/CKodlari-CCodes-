#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,i;
	
	printf("Kac Adet: "); scanf("%d", &x);
	
	for (i=1; i<=x; i++)
		printf("%d\n", rand());
}
