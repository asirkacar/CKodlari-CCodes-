#include <stdio.h>
//ax+b=0 denklemi
//x=-b/a
int main()
{
	double a, b, x;
	
	printf("ax+b=0 denklemi icin;\n");
	printf("a Sayisini Girin:");
	scanf("%lf", &a);
	printf("b Sayisini Girin: ");
	scanf("%lf", &b);
	
	x=-b/a;
	
	printf("x Degeri= %lf", x);
}
