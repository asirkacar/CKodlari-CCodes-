#include <stdio.h>

int kare(int a)
{
	int kare;
	kare = a*a;
	return kare;
}
int main()
{
	int x;
	printf("Giris: ");
	scanf("%d", &x);
	printf("%d", kare(x));
}
