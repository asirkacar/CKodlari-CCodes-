#include <stdio.h>

//DAHA GEL��M�� DENKLEM
//HEM A HEM B 1 �LE 5 ARASINDA DEGER ALICAK
//ax+b=0
//ax=-b
//x=-b/a

int main()
{
	int a=1, b=1;
	double x;
	printf("-----------FOR---------\n");
	for (; a<=5; a++)
	{
		for (b=1; b<=5; b++) //burayi b=1 yapt�m ��nk� bu blok �al�may� bitirince b=5 olarak kal�yo bidaha bu bloga girmiyo
		{
			x =(double) -b/a;
			printf("a:%d\t Iken\t b=%d\t iken\t x=%lf\n",a,b,x);
		}
		printf("--------------\n");
	}
	
	
	printf("-----------WHILE---------\n");
	a=1; b=1;
	while(a<=5)
	{
		while(b<=5)
		{
			x = (double) -b/a;
			printf("a:%d\t Iken\t b=%d\t iken\t x=%lf\n",a,b,x);
			b++;
		}
		printf("--------------\n");
		a++;
		b=1;
	}
}
