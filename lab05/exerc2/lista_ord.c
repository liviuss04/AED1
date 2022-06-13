#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

#define max 20

struct lista
{
    int no[max];
    int Fim;
};

Lista criar_lista()
{
    Lista lst;
    lst = (Lista) malloc(sizeof(struct lista));

    if (lst != NULL)
        lst->Fim = 0;

    return lst;
}

int lista_vazia(Lista lst)
{
    if (lst->Fim == 0)
        return 1; // Sucesso

    else
        return 0; // Falha
}

int lista_cheia(Lista lst)
{
    if (lst->Fim == max && lst != NULL)
        return 1; // Sucesso

    else
        return 0; // Falha
}

int insere_ord(Lista lst, int elem)
{
    if (lista_cheia(lst) == 1 || lst == NULL)
        return 0;

    if (lista_vazia(lst) == 1 || elem >= lst->no[lst->Fim - 1])
        lst->no[lst->Fim] = elem;

    else
    {
        int i, aux = 0;

        while (elem >= lst->no[aux])
            aux++;

        for (i = lst->Fim; i > aux; i--)
            lst->no[i] = lst->no[i - 1];

        lst->no[aux] = elem;
    }
    lst->Fim++; // incrementa fim

    return 1;
}

int remove_ord(Lista lst, int elem)
{
    int i, aux = 0;

    if (lst == NULL || lista_vazia(lst) == 1 || elem < lst->no[0] || elem > lst->no[lst->Fim - 1])
        return 0; // Falha

    while ((aux < lst->Fim) && (lst->no[aux] < elem))
        aux++;

    if (aux == lst->Fim || lst->no[aux] > elem)
        return 0;

    for (i = aux + 1; i < lst->Fim; i++)
        lst->no[i - 1] = lst->no[i];

    lst->Fim--; // Diminui o Fim
    return 1; // Sucesso
}

int obter_valor_elem(Lista lst, int i)
{
    if (lista_vazia(lst) == 1 || lst == NULL)
        return 0; // Falha

    // Percorre o vetor pelas suas posicoes
    for (int j = 0; j <= lst->Fim; j++)
    {
        if (i == j)
            return lst->no[j]; // Sucesso
    }
}
