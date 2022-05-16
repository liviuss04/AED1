#include <stdio.h>

int main(){
    char nome[100];

    printf("<<Vetor de char>>\n");


    printf("Digite um nome: ");
    scanf("%[^\n]s", nome);

    printf("O nome digitado e: ");
    for(int i = 0; i<100; i++){
        if( nome[i] == '\0' ) break;
        printf("%c", nome[i]-32);
    }

    return 0;
}