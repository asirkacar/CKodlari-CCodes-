#include <stdio.h>

int main()
{
	double C, F, CaCevir, FaCevir;
	
	printf("Santigrat(C) Degerini Girin: ");
	scanf("%lf", &C);
	printf("Fahrenayt(F) Degerini Girin: ");
	scanf("%lf", &F);
	
	CaCevir =(double)(F - 32) / 1.8;
	FaCevir = (double)(C * 1.8) + 32;
	
	printf("%lf Santigrat(C) = %lf Fahrenayt(F)\n", C, FaCevir);
	printf("%lf Fahrenayt(F) = %lf Santigrat(C)", F, CaCevir);
}
