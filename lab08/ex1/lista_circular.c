#include <stdio.h>
#include "lista.h"

struct no{
    int info;
    struct no *prox;
});

Lista criar_lista(){
    return NULL;
}

int lista_vazia(Lista lst){
    if(lst == NULL)
            return 1;
    else
            return 0;
}

int insere_final(Lista *lst, int elem){
    Lista N = (Lista) malloc(sizeof(no));

    if(N == NULL)
        return 0;

    N->info = elem;

    if(lista_vazia(lst) == 1){

        N->prox = N;
        *lst = N;
        return 1;
    }

    else{
        N->prox = (*lst)->prox;
        (*lst)->prox = N;
        *lst = N;
    }

    return 1;
}

int remove_inicio(Lista *lst, int elem){
    if(lista_vazia(lst) == 1)
        return 0;

    Lista aux = *lst;
    *elem = aux->info;

    if(*lst == (*lst)->prox)
        *lst = NULL;

    else
        (*lst)->prox = aux->prox;

    free(aux);
    return 1;
}

void obtem_valor_elem(Lista lst){
    printf("Lista: {");
    for(lst; lst != NULL; lst = lst-> prox){
        printf((lst->prox != NULL)? "%d, ":"%d}", lst->info);
    }
}
