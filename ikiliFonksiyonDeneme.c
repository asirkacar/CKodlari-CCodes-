#include <stdio.h>

int topla(int a,int b)
{
	return a+b;
}

int main()
{
	int a=5,b=3;
	printf("%d", topla(topla(a,b),topla(a,b)));	
}
