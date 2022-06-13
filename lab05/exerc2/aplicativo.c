#include "lista.h"
#include <stdio.h>

int main()
{
    int op = 0;
    Lista lst = criar_lista();

    while (1)
    {
        printf("----------\t\tMENU\t\t----------\n");
        printf("1 - Inicializar lista.\n");
        printf("2 - Inserir elemento.\n");
        printf("3 - Remover elemento.\n");
        printf("4 - Imprimir lista.\n");
        printf("9 - SAIR.\n");

        printf("\nDigite sua opcao: ");
        scanf("%d", &op);
        printf("\n");

        if (op == 1)
        {
            lst = criar_lista();
            printf("\nLista criada com sucesso!!!\n\n");
        }

        if (op == 2)
        {
            int elem;

            printf("\nDigite o elemento a ser INSERIDO: ");
            scanf("%d", &elem);

            if (insere_ord(lst, elem) == 1)
                printf("\nElemento INSERIDO com sucesso\n\n");
            else
                printf("\nFALHA!\n\n");
        }

        if (op == 3)
        {
            int elem;

            printf("\nDigite o elemento a ser REMOVIDO: ");
            scanf("%d", &elem);

            if (remove_ord(lst, elem) == 1)
                printf("\nElemento REMOVIDO com sucesso\n\n");
            else
                printf("\nFALHA!\n\n");
        }

        if (op == 4)
        {
            /*
            FALHA na implementação pois não estou conseguindo prosseguir
            ao apontar lista->Fim nessa etapa. Logo mandei imprimir as
            20 posições.
            */

            int elem, j;

            printf("{");

            for (elem = 0; elem <= 20; elem++)
            {

                if (elem == 20)
                {
                    printf("%d");
                    break;
                }

                j = obter_valor_elem(lst, elem);
                printf("%d, ", j);
            }

            printf("};\n\n");
        }

        if (op == 9)
            break;

        printf("\n");
    }

    free(lst);
    return 0;
}