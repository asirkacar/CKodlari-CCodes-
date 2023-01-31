#include <stdio.h>

main()
{
	int d1[2][3], d2[2][3], d3[2][3], i, j;
	
	for (i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("d1 [%d] [%d]:", i,j);
			scanf("%d", &d1[i][j]);
		}
	}
	
	printf("\n");
	
	for (i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("d1 [%d] [%d]:", i,j);
			scanf("%d", &d2[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			d3[i][j] = d1[i][j] + d2[i][j];
		}
	}
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("d3[%d][%d]: %d\n", i, j, d3[i][j]);
		}
	}
	
	
	
	
}
