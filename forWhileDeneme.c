#include <stdio.h>

int main()
{
	int s1=1;
	printf("----------------FOR------------------\n");
	for (s1; s1<=5; s1++)
		printf("%d. MErhaba...\n", s1);
	s1=1;
	printf("----------------WHILE------------------\n");
	while (s1<=5)
	{
		printf("%d. Merhaba...\n", s1);
		s1++;
	}
}
