#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

struct no{
    int info;
    struct no * prox;
};

Lista criar_lista(){
    Lista cab;
    cab = (Lista) malloc(sizeof(struct no));

    if(cab != NULL){
        cab->prox = NULL;
        cab->info = 0;}

    return cab;
}

int lista_vazia(Lista lst){
    if(lst->prox == NULL)
            return 1; //Lista vazia

    else
        return 0;
}

int insere_ord(Lista *lst, int elem){

    Lista N = (Lista) malloc(sizeof(struct no));

    if(N == NULL)
        return 0;

    N->info = elem;

    Lista aux = *lst;

    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;

    N->prox = aux->prox;
    aux->prox = N;
    return 1;
}

int remove_ord(Lista *lst, int elem){
    if(lista_vazia(lst) == 1)
        return 0; //Lista Vazia

    Lista aux = *lst;

    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;

    if(aux->prox == NULL || aux->prox->info > elem)
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