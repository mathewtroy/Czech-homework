#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[10],n,i;
	printf("Zadejte cislo, ktere chcete prevest: ");
    if ((scanf("%d", &n)!=1) || n<1){
            printf("Chyba!");
            return 1;
    }

	for(i=0;n>0;i++){
	a[i]=n%2;
	n=n/2;
	}

	printf("\nBinarni hodnota daneho cisla je= ");
	for(i=i-1;i>=0;i--){
	printf("%d",a[i]);
	}
return 0;
}

//Convert decimal number to binary number in programming C (used the Czech language)
