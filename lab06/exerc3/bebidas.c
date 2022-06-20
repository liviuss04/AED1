#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

#define max 20

struct no
{
    int volume;
    float preco;
    char nome[20];
    struct no *prox;
};

Lista criar_lista()
{
    return NULL;
}

int lista_vazia(Lista lst)
{
    if (lst == NULL)
        return 1;
    else
        return 0;
}

void lista_cheia(Lista lst);
/*
Nao e possivel criar uma funcao para essa
essa verificacao. Apenas ha a verificacao
se houve a insersecao correta do elemento.
*/

int insere_elem(Lista *lst)
{
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)
        return 0;

    printf("Digite o nome da bebida: ");
    setbuf(stdin, NULL);
    scanf("%s", N->nome);
    
    printf("Digite o volume da bebida: ");
    scanf("%d", &N->volume);
    
    printf("Digite o preco da bebida: R$ ");
    scanf("%f", &N->preco);

    N->prox = *lst;
    *lst = N;
    return 1;
}

int remove_elem(Lista *lst)
{
    if (lista_vazia(lst) == 1)
        return 0;

    Lista aux = *lst;

    if (aux->prox == NULL){
        *aux->nome = NULL;
        aux->preco = 0;
        aux->volume = 0;

        free(aux);
        return 1;
    }

    while (aux->prox->prox != NULL)
        aux = aux->prox;
    
    aux->prox = NULL;
    return 1;
}

void obtem_valor_elem(Lista lst){


    printf("-----------------");
    printf("\t\tLista De Bebidas\n");

    int i = 0;
    for(lst; lst != NULL; lst = lst-> prox, i++){
        printf("\tBebida: %d\n", i+1);
        printf("\nNome: %s", lst->nome);
        printf("\nVolume: %d", lst->volume);
        printf("\nPreco: R$%.2f", lst->preco);
        
        printf((lst->prox != NULL)? "\n\n":"\n\n-----------------\n\n");
    }
}

