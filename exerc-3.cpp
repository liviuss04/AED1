#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int b[4], dec = 0;

    printf("== Conversor de numeros binarios ==");

    for(int i=0; i<4; i++){
        printf("\nDigite o %do. bit:", i+1);
        scanf("%d", &b[i]);
    }

    // conversao

    for(int i=0; i<4; i++){
        if(b[i] != 0){
            dec = dec + pow(2,(4-(i+1)));
        }
    }

    printf("O numero binario %d%d%d%d corresponde ao numero decimal %d", b[0], b[1], b[2], b[3], dec);
}
