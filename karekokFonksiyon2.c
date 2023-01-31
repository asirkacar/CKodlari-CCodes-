#include <stdio.h>


void karekokHesapla(int sayimiz)
{
	int a, sayimizClonePozitif=sayimiz, sayimizCloneKok=sayimiz, sayimizCloneNegatif=sayimiz,sayacNegatif=0,sayacPozitif=0, d=0, i, kuvvet=0, q=0;
	int sayininKokuNegatif=1, c, sayininKokuPozitif=1, sayininKoku=1;
	double karekok;
	char tamKaremi = 1;
	for (i=2; 1<sayimiz; i++)
	{
		if (sayimiz%i==0)
		{
			while(1 > sayimiz%i)
			{
				sayimiz = sayimiz / i;
				printf("%d\n", i);
				kuvvet++;
			}
		}
		printf("%d Sayisinin %d Carpaninin Kuvveti %d\n", sayimizClonePozitif, i, kuvvet);
		if (kuvvet == 1 || kuvvet > 2)
		{
			printf("Tam Kare Degil\n");
			tamKaremi=0;
			sayimiz=sayimizClonePozitif;
			kuvvet=0;
			break;
		}
		else
			printf("Sayi Tam Kare");
			kuvvet=kuvvet/2;
			for (c=1; c<=kuvvet; c++)
			{
				sayininKoku = i * sayininKoku;
			}
		kuvvet=0;
	}

	printf("KareKok: %d", sayininKoku);
	if (tamKaremi==0)
	{
		while (q<1)
		{
			sayimiz=sayimizClonePozitif;
			for (i=2; 1 < sayimiz; i++)
			{
				if (sayimiz%i==0)
				{
					while (1 > sayimiz%i)
					{
						sayimiz = sayimiz / i;
						printf("%d\n", i);
						kuvvet++;
					}
					if (kuvvet == 1 || kuvvet > 2)
					{
						d++;
					}
				}
				kuvvet=0;
			}
			if (d!=0)
			{
				sayimizClonePozitif++;
				sayacPozitif++;
				d=0;
			}
			else
			{
				printf("Tam Kare Yeni Sayi: %d", sayimizClonePozitif);
				sayimiz=sayimizClonePozitif;
				for (i=2; 1 < sayimiz; i++)
				{
					if (sayimiz%i==0)
					{
						while (1 > sayimiz%i)
						{
							sayimiz = sayimiz / i;
							//printf("%d\n", i);
							kuvvet++;
						}
					}
				kuvvet=kuvvet/2;
				for (c=1; c<=kuvvet; c++)
				{
					sayininKokuPozitif = i * sayininKokuPozitif;
					//printf("TABAN: %d\n", sayininKoku);
				}
				kuvvet=0;
				}
				printf("Kok: %d\n", sayininKokuPozitif);
				break;
			}
		}
		
		
		while (q<1)
		{
			sayimiz=sayimizCloneNegatif;
			for (i=2; 1 < sayimiz; i++)
			{
				if (sayimiz%i==0)
				{
					while (1 > sayimiz%i)
					{
						sayimiz = sayimiz / i;
						//printf("%d\n", i);
						kuvvet++;
					}
					if (kuvvet == 1 || kuvvet > 2)
					{
						d++;
					}
				}
				kuvvet=0;
			}
			if (d!=0)
			{
				sayimizCloneNegatif--;
				sayacNegatif++;
				d=0;
			}
			else
			{
				printf("Tam Kare Yeni Sayi: %d\n", sayimizCloneNegatif);
				sayimiz=sayimizCloneNegatif;
				for (i=2; 1 < sayimiz; i++)
				{
					if (sayimiz%i==0)
					{
						while (1 > sayimiz%i)
						{
							sayimiz = sayimiz / i;
							//printf("%d\n", i);
							kuvvet++;
						}
					}
				kuvvet=kuvvet/2;
				for (c=1; c<=kuvvet; c++)
				{
					sayininKokuNegatif = i * sayininKokuNegatif;
					//printf("TABAN: %d\n", sayininKoku);
				}
				kuvvet=0;
				}
				printf("Kok: %d\n", sayininKokuNegatif);
				break;
			}
		}
		if (sayacNegatif<sayacPozitif)
		{
			karekok = (double) (sayimizCloneKok + sayimizCloneNegatif) / (2 * sayininKokuNegatif);
			printf("KareKok: %lf", karekok);
		}
		else
		{
			karekok = (double) (sayimizCloneKok + sayimizClonePozitif) / (2 * sayininKokuPozitif);
			printf("KareKok: %lf", karekok);
		}
	}
}

int main()
{
	int a;
	printf("Giris: "); scanf("%d", &a);
	karekokHesapla(a);
}
