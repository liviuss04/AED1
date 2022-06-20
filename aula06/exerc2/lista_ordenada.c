#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no
{
    int info;
    struct no *prox;
};

Lista criar_lista(Lista lst)
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
// Na teoria nao existe a
// funcao lista cheia pois
// nao tem como medir o comprimento
// de uma lista que se baseia no
// tamanho da memoria do computador.

int insere_elem(Lista *lst, int elem)
{

    Lista N = (Lista)malloc(sizeof(struct no));

    if (N == NULL)
        return 0;

    N->info = elem;

    // Primeiro elemento
    if (lista_vazia(*lst) || elem <= (*lst)->info)
    {
        N->prox = *lst;
        *lst = N;
        return 1;
    }

    Lista aux = *lst;

    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;

    N->prox = aux->prox;
    aux->prox = N;
    return 1;
}

int remove_elem(Lista *lst, int elem)
{

    // Verifica se está vazio.
    if (lista_vazia(lst) == 1 || elem < (*lst)->info)
        return 0;

    Lista aux = *lst;

    if (elem == (*lst)->info)
    {
        *lst = aux->prox;
        free(aux);
        return 1;
    }

    // Percorre a lista.
    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;

    // Caso ele não exista
    if (aux->prox->info > elem || aux->prox == NULL)
        return 0;

    //Remove elemento 
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

void obtem_valor_elem(Lista lst){
    printf("Lista: {");

    while(lst != NULL){
        if(lst->prox != NULL)
            printf("%d, ", lst->info);
        
        else
            printf("%d}", lst->info);
        
        lst = lst->prox;
    }
}