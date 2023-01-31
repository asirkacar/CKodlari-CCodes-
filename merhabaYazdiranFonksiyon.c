#include <stdio.h>
void merhaba()
{
	printf("merhaba\n");
}

void NdefaMerhabaYaz(int x)
{
	int i=1;
	for (i; i<=x; i++)
		printf("%d. Merhaba\n", i);
}

void main()
{
	int a,i;
	printf("N Defa: ");
	scanf("%d", &a);
	
	NdefaMerhabaYaz(a);
	
	printf("-------------------------\n");
	merhaba();
	printf("-------------IKINCI YOL------------\n");
	for (i=1; i<=a; i++)
		merhaba();
}
