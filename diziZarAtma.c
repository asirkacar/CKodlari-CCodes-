#include <stdio.h>
//100 kere at�lan zar her eleman ka� defa gelmi� onu yazd�racak dizilerle yap�lcak amama
int main()
{
	int rastgele, bir[1], iki[1], uc[1], dort[1], bes[1], alti[1], i, toplambir=0,deneme=0;
	
	for (i=0; i<10; i++)
	{
		rastgele = 1+rand()%6;
		printf("rastgele: %d\n", rastgele);
		if (rastgele==1)
		{
			deneme+=1; //bu �ekil oluyo ama diziyle olmad�
			bir[i]=deneme;
		}	
		else if (rastgele==2)
			iki[i]=rastgele;
		else if (rastgele==3)
			uc[i]=rastgele;
		else if (rastgele==4)
			dort[i]=rastgele;
		else if (rastgele==5)
			bes[i]=rastgele;
		else if (rastgele==6)
			alti[i]=rastgele;
		//printf("%d\t", bir[i]);
	}
	printf("\n");
	printf("%d\n",deneme);
	printf("%d", bir);
}
