#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

#define max 20
struct lista
{
    int n[max];
    int Fim;
};

Lista criar_lista()
{
    Lista l;
    l = (Lista)malloc(sizeof(struct lista));

    if (l != NULL)
        l->Fim = 0;

    return l;
}

int lista_vazia(Lista l)
{
    if (l->Fim == 0)
        return 1; // Sucesso

    else
        return 0; // Falha
}

int lista_cheia(Lista l)
{
    if (l->Fim == max && l != NULL)
        return 1; // Sucesso

    else
        return 0; // Falha
}

int insere_elem(Lista l, int i)
{
    if (lista_cheia(l) == 1 || l == NULL)
        return 0;

    l->n[l->Fim] = i; // insere
    l->Fim++;         // incrementa fim
    return 1;
}

int remove_elem(Lista l, int i)
{
    if (l == NULL || lista_vazia(l) == 1)
        return 0; // Falha

    int aux = 0;

    while (aux < l->Fim && l->n[aux] != i)
        aux++;

    if (aux == l->Fim)
        return 0;

    for (int j = aux + 1; j < l->Fim; j++)
        l->n[j - 1] = l->n[j];

    l->Fim--; // Diminui o Fim
    return 1; // Sucesso
}

int obter_valor_elem(Lista l, int i)
{
    if (lista_vazia(l) == 1 || l == NULL)
        return 0; // Falha

    // Percorre o vetor pelas suas posicoes
    for (int j = 0; j <= l->Fim; j++)
    {
        if (i == j)
            return l->n[j]; // Sucesso
    }
}
