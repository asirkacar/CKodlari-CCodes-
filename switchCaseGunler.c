#include <stdio.h>

int main()
{
	char gunler, giris;
	
	dongu:
	printf("Giris: ");
	scanf("%d", &giris);
	
	if (giris<1 || giris>7)
		goto dongu;
	
	switch(giris)
	{
		case 1:
			printf("Pazartesi");
			break;
		case 2:
			printf("Sali");
			break;
		case 3:
			printf("Carsamba");
			break;
		case 4:
			printf("Persembe");
			break;
		case 5:
			printf("Cuma");
			break;
		case 6:
			printf("Cumartesi");
			break;
		default:
			printf("Pazar");
	}	
}
