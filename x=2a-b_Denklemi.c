#include <stdio.h>

//x=2a-b

int main()
{
	int a=1,b,x;
	
	for (;a<=10;a++)
	{
		for (b=1;b<=10;b++)
		{
			x=2*a-b;
			printf("a=%d\t b=%d\t iken x=%d\t x=2a-b\n",a,b,x);
		}
		printf("--------------------------------\n");
	}
}
