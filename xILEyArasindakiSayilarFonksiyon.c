#include <stdio.h>

void yazdir(int x, int y)
{
	if (x<y)
	{
		for (; x<=y; x++)
			printf("%d\n", x);
	}
	else if (x>y)
	{
		for (; y<=x; y++)
			printf("%d\n", y);
	}
	else 
		printf("Sayilar Esit Gecersiz Giris");

}

void main()
{
	int a, b;
	printf("Ilk Deger: "); scanf("%d", &a);
	printf("Ikinci Deger: "); scanf("%d", &b);
	
	yazdir(a,b);
}
