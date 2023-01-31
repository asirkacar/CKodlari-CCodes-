#include <stdio.h>
#define pi 3.14
//alan pi*r*r
//cevre 2*pi*r
int main()
{
	double alan, cevre, r=1;
	
	for (; r<=10; r++)
	{
		cevre = 2*pi*r;
		alan = pi*r*r;
		
		printf("Yaricap: %lf\t Alan: %lf\t Cevre: %lf\n", r, alan, cevre);
	}
}
