#include <stdio.h>
#include <stdlib.h>

int* aloca_inteiro(int n);


void imprime_vet(int *p, int n){
    for(int i = 0; i<n; i++)
        printf("v[%d] = %d\n", i+1, p[i]);
}


int* aloca_inteiro(int n){
    return (int *) malloc(n * sizeof(int));   
}


int main(){
    int *p, n=10;
    p = aloca_inteiro(10);
    imprime_vet(p, n);
}

