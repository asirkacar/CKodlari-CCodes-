#include <stdio.h>
#include <math.h>

//Kombinasyon C(n,r)=n!/r!(n-r)!
//N elemanlý kümenin rli kombinasyonu

int fak(int f)
{
	int i, fak=1;
	for (i=1; i<=f; i++)
	{
		fak = i*fak;
	}
	return fak;
}
int main()
{
	int n,r;
	double c;
	printf("N: "); scanf("%d", &n);
	printf("R: "); scanf("%d", &r);
	
	c = (double)(fak(n))/(fak(r)*fak(n-r));
	printf("Kombinasyon: %lf", c);
	
	return 0;
}
