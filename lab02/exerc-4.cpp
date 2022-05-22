#include <stdio.h>

int main(){
    int vet[10];

    //Preenchendo o vetor
    for(int i = 0; i<10; i++) vet[i]=i;

    //Exibindo o vetor
    for(int j=9; j>=0; j--) printf("%d\n", *vet + j);

}
