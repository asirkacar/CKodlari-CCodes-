#include <stdio.h>
#include <string.h>


main()
{
	char isim[1000];
	
	printf("Yaz: "); gets(isim);
	
	strrev(isim);
	printf("%s", isim);
}
