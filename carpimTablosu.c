#include <stdio.h>

int carpimTablo (int a)
{
	int b,carpim;

	for (b=0; b<=10; b++)
	{
		carpim = a*b;
		printf("%d x %d = %d\n", a,b,carpim);		
	}
	return carpim;
}

int carpimTabloTum (int a, int b)
{
	int carpim;
	for (a=0; a<=10; a++)
		{
			for (b=0; b<=10; b++)
			{
				carpim = a*b;
				printf("%d x %d = %d\n", a,b,carpim);
			}
			printf("------------------------------\n");
		}
	return carpim;
}

int main()
{
	int a,b;
	
	printf("Giris: "); scanf("%d", &a);
	
	switch(a)
	{
		case 1:
			carpimTablo(a);
			break;
		case 2:
			carpimTablo(a);
			break;
		case 3:
			carpimTablo(a);
			break;
		case 4:
			carpimTablo(a);
			break;
		case 5:
			carpimTablo(a);
			break;
		case 6:
			carpimTablo(a);
			break;
		case 7:
			carpimTablo(a);
			break;
		case 8:
			carpimTablo(a);
			break;
		case 9:
			carpimTablo(a);
			break;
		case 10:
			carpimTablo(a);
			break;
		default:
			carpimTabloTum(a,b);
			break;
	}
}
