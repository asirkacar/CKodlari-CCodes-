#include <stdio.h>

int main()
    {
    	char a=5, b=4, topla=a+b;
    	printf("%d\n",topla);
        printf("hello world\n");
        
        int sayi2=5;
        int faktoryel=1;
        for(int sayi=1; sayi<=sayi2; sayi++)
        	faktoryel=sayi*faktoryel;
        printf("%d\n",faktoryel);
        
        int topla1=5, topla3=0;
        for(int sayi=1; sayi<=topla1; sayi++)
        	topla3=sayi+topla3;
        printf("%d", topla3);
        return 0;
    }
