/*
Explicação: o tipo de variável solicitada possuí um pequeno 
número de bits e um pequeno intervalo para armazenar a 
quantidade de informações fornecidas em cada dado 
proposto no exercício.
*/


#include <stdio.h>

int main()
{
    int n = 15, fat = 1, aux;

    printf("<<Fatorial>>\n");

    for (int i = 11; i <= n; i++)
    {
        aux = i;

        printf("%d! = ", i);

        while (aux > 0)
        {
            fat = aux * fat;
            aux--;
        }

        printf("%d", fat);
        printf("\n");

        fat = 1;
    }

    return 0;
}