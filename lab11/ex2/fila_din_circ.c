#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct no
{
    int info, cont;
    struct no *prox;
};

Fila cria_fila()
{
    return NULL;
}

int fila_vazia(Fila f)
{

    if (f == NULL)
        return 1; // Fila vazia

    else
        return 0; // Fila contem algum elemento
}

int insere_fim(Fila *f, int elem)
{
    Fila N = (Fila)malloc(sizeof(struct no));

    if (N == NULL)
        return 0;

    N->info = elem;

    if (fila_vazia(*f) == 1)
    {
        N->prox = N;
        *f = N;
        N->cont = 0;
    }

    else
    {
        N->prox = (*f)->prox;
        (*f)->prox = N;
        *f = N;
    }

    N->cont++;
    return 1;
}

int remove_ini(Fila *f, int *elem)
{
    if (fila_vazia(*f) == 1)
        return 0;

    Fila aux = (*f)->prox;
    *elem = aux->info;

    if (*f == (*f)->prox)
        *f = NULL;

    else
        (*f)->prox = aux->prox;

    aux->cont--;
    free(aux);
    return 1;
}

int le_final(Fila f)
{
    if (fila_vazia(f))
        return 0;

    printf("\nElemento: {%d}\n", f->info);
    return 1;
}

int mostrar_fila(Fila *f)
{
    if (fila_vazia(*f))
        return 0;

    Fila aux = *f;

    int i = 0;

    printf("\nFila: {");

    do
    {
        if (i != aux->cont)
            printf("%d, ", aux->info);

        else
            printf("%d}", aux->info);

        aux = aux->prox;
        i++;
    } while (i != (aux->cont));

    return 1;
}
