#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define max 20

struct pilha
{
    int info;
    struct pilha *prox;
};

Pilha cria_pilha()
{
    return NULL;
}

int pilha_vazia(Pilha p)
{
    if (p == NULL)
        return 1;
    else
        return 0;
}

int pilha_cheia(Pilha p)
{
    printf("\nNao verificavel!");
}

int empilha(Pilha *p, int elem)
{
    Pilha topo = (Pilha)malloc(sizeof(struct pilha));

    if (topo == NULL)
        return 0;

    topo->info = elem;
    topo->prox = *p;
    *p = topo;

    return 1;
}

int desempilha(Pilha *p, int *elem)
{
    if (pilha_vazia(*p) == 1)
        return 0;

    Pilha aux = *p;
    *elem = aux->info;
    *p = aux->prox;
    free(aux);

    return 1;
}

int le_topo(Pilha *p, int *elem)
{
    if (pilha_vazia(*p))
        return 0;

    Pilha aux = *p;

    while (aux->prox != NULL)
        aux = aux->prox;

    *elem = (*p)->info;
    return 1;
}

int mostra_pilha(Pilha p)
{
    if (pilha_vazia(p) == 0)
    {
        printf("Pilha: {");
        for (p; p != NULL; p = p->prox)
            printf((p->prox != NULL) ? "%d, " : "%d}", p->info);

        return 1;
    }

    else
        return 0;
}