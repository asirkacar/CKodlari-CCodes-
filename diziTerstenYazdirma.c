#include <stdio.h>

int main()
{
	int dizi[]={1,2,3,4,5},i,b=1;
	for (i=0; i<sizeof(dizi)/sizeof(int); i++)
		printf("%d\n", dizi[i]);
	printf("\n");
	
	i=sizeof(dizi)/sizeof(int);
	for (i=i-1; i>=0; i--)
		printf("%d\n",dizi[i]);
	i=1;
	for(i=1; i<=9;i++)
	{
		for(b=1; b<=i; b++)
			printf("*"); //yada busekilde olur printf("%d",i)
		printf("\n");
	}
	for (i=9; i>=0; i--)
	{
		for(b=1; b<=i; b++)
			printf("*"); //yada busekilde olur printf("%d",i)
		printf("\n");
	}
}
