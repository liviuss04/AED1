#include <stdio.h>
#include "lista.h"

#define max 20

struct no
{
    int info;
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

int insere_elem(Lista *lst, int elem)
{
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)
        return 0;

    N->info = elem;
    N->prox = *lst;
    *lst = N;
    return 1;
}

int remove_elem(Lista *lst, int elem)
{
    if (lista_vazia(lst) == 1)
        return 0;

    Lista aux = *lst;

    if (elem == (*lst)->info)
    {
        *lst = aux->prox;
        free(aux);
        return 1;
    }

    while (aux->prox != NULL && aux->prox->info != elem)
        aux = aux->prox;

    if (aux->prox == NULL)
        return 0;

    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

void obtem_valor_elem(Lista lst){
    printf("Lista: {");
    for(lst; lst != NULL; lst = lst-> prox){
        printf((lst->prox != NULL)? "%d, ":"%d}", lst->info);
    }
}

void lista_cheia(Lista lst);
/*
Nao e possivel criar uma funcao para essa
essa verificacao. Apenas ha a verificacao
se houve a insersecao correta do elemento.
*/
