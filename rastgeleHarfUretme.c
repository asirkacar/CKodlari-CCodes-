#include <stdio.h>
#include <time.h>


int main()
{
	int randN;
	
	srand(time(NULL));
	randN = 65+rand()%90;
	printf("%c", randN);
	
	return 0;
}
