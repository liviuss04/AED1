#include <stdio.h>
#include <stdlib.h>

void mult(int *a, int *b, int c){
    *a = (*a) * c;
    *b = (*b) * c;

    return;
}

int main(){
    int a, b, c;

    printf("Digite o ponto: ");
    scanf("%d,%d", &a, &b);

    printf("Digite a constante: ");
    scanf("%d", &c);

    printf("Resultado: (%d,%d) * %d = ", a, b, c);

    mult(&a, &b, c);

    printf("(%d,%d)\n", a, b);

    return 0;
}