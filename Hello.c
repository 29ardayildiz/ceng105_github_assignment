#include<stdio.h>

int main(){

//    char s;

    printf("Hello World!");
//    scanf("%c", &s);

    int ilk_sayi = 1;
	int ikinci_sayi = 1;
	int i,n;
		
	printf("Fibonacci dizisinin kac terimini gormek isteriniz?: ");
	scanf("%d",&n);
	printf("%d\n%d\n", ilk_sayi, ikinci_sayi);
	
	for(i=0;i<n;i++){
		
		int top = ikinci_sayi;
		ikinci_sayi += ilk_sayi;
		ilk_sayi = top;
	
		printf("%d\n", ikinci_sayi);		
	}

    return 0;
}