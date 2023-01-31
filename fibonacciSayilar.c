#include <stdio.h>

int main()
{
	int n, s1=1,s2=1,s3, i;
	
	printf("N: "); scanf("%d", &n);
	printf("0\n%d\n%d\n",s1,s2);
	for (i=1; i<=n-3; i++)
	{
		s3=s1+s2;
		printf("%d\n",s3);
		s1=s2;
		s2=s3;
	}
}
