#include <stdio.h>

int main()
{
	int dizi[]={12,14,22,6,8}, dizi2[4],i,l1,l2;
	dizi2[0]=2;
	dizi2[1]=8;
	dizi2[2]=9;
	dizi2[3]=14;

	for(i=0; i < sizeof(dizi)/sizeof(int); i++)
		printf("%d. indisin elamani %d\n", i, dizi[i]);
		
	printf("--------------DIZI2-------------\n");
	
	for(i=0; i < sizeof(dizi2)/sizeof(int); i++)
		printf("%d. indisin elemani %d\n", i, dizi2[i]);
}
