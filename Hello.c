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

	int num;
	printf("Bir sayi giriniz:");
	scanf("%d",&num);
		
	asal_mi(num);
	
	if (asal_mi(num) == 0){
		printf("Asal degil");
	}
 	
	else if (asal_mi(num) == 1){
		printf("Asal");
	}

    return 0;
}

int asal_mi(sayi){
	
	int i;
	
	
	for (i=2; i<sayi; i++){
		if(sayi % i == 0){
			return 0;
		}	
	}
	
	return 1;
}