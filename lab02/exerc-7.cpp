#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};

int main(){
    int tam;

    printf("Quantos pontos deseja digitar: ");
    scanf("%d", &tam);

    ponto *p;

    p = (ponto *) malloc(tam * sizeof(ponto));

    for(int i=0; i<tam; i++){
        printf("Entre com a coordenada x do ponto %d: ", i+1);
        scanf("%d", &p[i].x);

        printf("Entre com a coordenada y do ponto %d: ", i+1);
        scanf("%d", &p[i].y);
    }

    printf("Pontos digitados: ");
    
    for(int i=0; i<tam; i++)
        printf("(%d,%d); ", p[i].x, p[i].y);
}
