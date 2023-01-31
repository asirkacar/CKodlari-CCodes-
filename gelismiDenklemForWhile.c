#include <stdio.h>
//ÝKÝ BÝLÝNMEYENLÝ GELÝÞMÝÞ
//a 1 iken byi 1den 10a kadar arttýrýp degerleri yazdýracaz

//ax+b=0
//ax=-b
//x=-b/a
// \t bir tab boþluk býrakýr
int main()
{
	int a,b=1;
	double x;
	
	printf("a: ");
	scanf("%d", &a);
	printf("-----------FOR---------\n");
	for (; b<=10; b++)
	{
		x = (double) -b/a;
		printf("b = %d\t iken\t x = %lf\n", b, x);
	}
	
	printf("-----------WHILE---------\n");
	b=1;
	while(b<=10)
	{
		x =(double) -b/a;
		printf("b = %d\t iken\t x = %lf\n", b, x);
		b++;
	}
}
