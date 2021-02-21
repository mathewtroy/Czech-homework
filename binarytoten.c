#include <stdio.h>
#include <stdio.h>

int main(){
    long int binar, zbytek, decimal = 0, i = 0;
    printf("Zadejte binarni cislo: \n");
    if ((scanf("%d", &binar)!=1) || binar<1){
            printf("Chyba!");
            return 1;
    }

    while(binar != 0){
        zbytek = binar % 10;
        decimal += zbytek * (int)pow(2, i++);
        binar = binar / 10;
    }

    printf("Vase desetinne cislo: \n%d", decimal);
    return 0;
}
