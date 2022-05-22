#include <stdio.h>

int main(){
    int a=40;
    int *p;
    p = &a;

    //a)
    printf("endereco(a) = %d\n", &a);
    printf("endereco(p) = %d\n", p);

    //b)
    printf("\n\nDigite o novo valor: ");
    scanf("%d", p);
    printf("\nnovo valor de (a): %d", a);
}
