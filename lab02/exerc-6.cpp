#include <stdio.h>
#include <stdlib.h>

int main(){

    int *v, tam, p=0, imp=0;

    printf("Quantos inteiros serao lidos: ");
    scanf("%d", &tam);

    v = (int *) malloc(tam * sizeof(int));

    for(int i=0; i<tam; i++){
        printf("%dº inteiro: ", i+1);
        scanf("%d", &v[i]);
    }

    for(int j=0; j<tam; j++){
        if(v[j] % 2 == 0) p = p+1;
        else imp = imp+1;
    }

    printf("\nSao pares: %d dos %d inteiro lidos.\n", p, tam);
    printf("Sao impares: %d dos %d inteiro lidos.\n", imp, tam);

    free(v);

}