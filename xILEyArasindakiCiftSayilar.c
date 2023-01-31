#include <stdio.h>

int main()
{
	int s1, s2;
	
	printf("Sayi Gir: ");
	scanf("%d", &s1);
	printf("Sayi Gir: ");
	scanf("%d", &s2);
	if (s1%2==0)
		printf("%d", s1);
	dongu:
	s1++;
	if (s1%2==0)
	{
		printf("%d", s1);
	}
	if (s2>s1)
	{	
		goto dongu;
	}
}
