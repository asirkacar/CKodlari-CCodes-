#include <stdio.h>


void yazi(char x[20])
{
	int i;
	for (i=1; i<=10; i++)
		printf("%s\n", x);
}

void main()
{
	char a[20];
	printf("Giris: "); scanf("%s", a);
	yazi(a);
}
