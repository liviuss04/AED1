#include <stdio.h>

int main(){
    double vet[10], v=0;

    //Preenchendo o vetor
    for(int i=0; i<10; i++)
        vet[i] = i;

    //Exibindo o vetor
    for(int i=0; i<10; i++)
        printf("%.2lf\n", *vet+i);

    return 0;
}
