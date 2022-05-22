#include <stdio.h>
#include <stdlib.h>

int main(){

    int j[3];
    float m, n, p;

    for(int i=0; i<3; i++){
            printf("Bolao jogador %d R$: ", i+1);
            scanf("%d", &j[i]);
    }


    m=j[0]+j[1]+j[2];

    printf("Informe o valor do premio: ");
    scanf("%f", &p);

    printf("\nJogador 1 recebera R$: %.1f\n", (j[0]/m)*p);
    printf("Jogador 2 recebera R$: %.1f\n", (j[1]/m)*p);
    printf("Jogador 3 recebera R$: %.1f\n", (j[2]/m)*p);

    return 0;
}
