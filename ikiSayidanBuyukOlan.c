#include <stdio.h>

int main()
{
	int s1, s2;
	
	printf("Ilk Sayi: ");
	scanf("%d", &s1);
	printf("Ikinci Sayi: ");
	scanf("%d", &s2);
	
	if (s1>s2)
		printf("Ilk Sayi Ikinciden Buyuk: %d > %d", s1, s2);
	else if (s2>s1)
		printf("Ikinci Sayi Ilk Sayidan Buyuk: %d > %d", s2, s1);
	else
		printf("Sayilar Esit: %d = %d", s1, s2);
}
