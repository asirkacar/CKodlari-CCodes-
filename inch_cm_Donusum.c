#include <stdio.h>

int main()
{
	double inchGiris, cmGiris, donusumInch, donusumCm;
	
	printf("Cm Degerini Girin:");
	scanf("%lf", &cmGiris);
	
	printf("Inch Degerini Girin:");
	scanf("%lf", &inchGiris);
	
	donusumInch = cmGiris / 2.54;
	donusumCm = inchGiris * 2.54;
	
	printf("%lf cm = %lf inch\n", cmGiris, donusumInch);
	printf("%lf inch = %lf cm", inchGiris, donusumCm);
}
