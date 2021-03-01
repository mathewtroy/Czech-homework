#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    long long decimalCislo=0;
    char hexCislo[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char hexadecimal[30];
    int i, j, power=0;
    printf("Zadejte sestnactkove cislo:\n");
    scanf("%s", hexadecimal);

    for(i=strlen(hexadecimal)-1; i >= 0; i--) {
        for(j=0; j<16; j++){
            if(hexadecimal[i] == hexCislo[j]){
                decimalCislo += j*pow(16, power);
            }
        }
        power++;
    }

    printf("Vase desetinne cislo je:\n%ld", decimalCislo);
    return 0;
}
