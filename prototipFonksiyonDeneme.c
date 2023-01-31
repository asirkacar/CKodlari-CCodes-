#include <stdio.h>

void kare(int a, int b); //BU SEKILDE ANA FONKSIYONDAN SONRA FONKSIYONU YAZIP BURDA PROTOTIP OLUSTURUP CALISTIRABILIYORUZ

int main()
{
	int x=5, y=4;
	topla(x, y);
}
void topla(int a, int b)
{
	int topla;
	topla = a + b;
	printf("%d", topla);
}
