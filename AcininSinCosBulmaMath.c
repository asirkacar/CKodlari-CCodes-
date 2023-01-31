#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
	double d, r;
	
	printf("Aci: "); scanf("%lf", &d);
	
	r=d*pi/180; //BURDA AÇIYI RADYANA ÇEVÝRDÝK
	
	printf("Aci: %lf sinus: %lf kosinus: %lf", d, sin(r), cos(r));
}
