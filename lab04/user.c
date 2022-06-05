#include "ponto.h"
#include <stdio.h>

int main(){
    float X, Y, D;

    Ponto *a = gera_pto();
    Ponto *b = gera_pto();

    printf("Digite as coordenadas:\n ");
    
    printf("\nPonto a: X Y\n");
    scanf("%f %f", &X, &Y);
    //Ponto a
    set_pto(a, X, Y);
    get_pto(a, &X, &Y);

    printf("\nPonto b: X Y\n");
    scanf("%f %f", &X, &Y);
    //Ponto b
    set_pto(b, X, Y);
    get_pto(b, &X, &Y);


    //Distancia entre os pontos a e b.
    D = distancia_pto(a, b);

    printf("\n\n\t\tDistancia entre os pontos A e B: %.2f\n", D);

    //Deleta os pontos na memória
    libera_pto(&a);
    libera_pto(&b);

    return 0;
}