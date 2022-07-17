#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pilha.h"

int main()
{
    int op;
    int num;

    Pilha lst;
    int a;

    do
    {
        system("CLS || clear");
        do
        {
            printf(" --- PILHA DINAMICA/ENCADEADA --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Inicializar Pilha\n");
            printf(" 2. Verificar Pilha vazia\n");
            printf(" 3. Empilhar elemento\n");
            printf(" 4. Desempilhar elemento\n");
            printf(" 5. Mostrar Topo\n");
            printf(" 6. Mostrar Pilha\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);

            if (op > 7)
            {
                printf("\nOpcao Invalida! Tente novamente...");
                getch();
                system("CLS || clear");
            }

        } while ((op < 1) || (op > 7));

        switch (op)
        {
        case 1:
            lst = cria_pilha();

            if (lst == NULL)
                printf("\nPilha criada com sucesso!");

            getch();
            break;

        case 2:
            if (pilha_vazia(lst))
                printf("\nPilha esta vazia!\n");

            else
                printf("\nPilha NAO esta vazia!\n");

            getch();
            break;

        case 3:
            printf("\nDigite um numero: ");
            scanf("%d", &num);

            if (empilha(&lst, num))
                printf("\nElemento inserido com SUCESSO!\n");

            else
                printf("\nERRO!");

            getch();
            break;

        case 4:
            if (desempilha(&lst, &num))
                printf("\nElemento removido %d com SUCESSO!\n", num);

            else
                printf("\nERRO!");

            getch();
            break;

        case 5:
            if (le_topo(&lst, &num))
                printf("\nElemento no topo: %d", num);

            else
                printf("\nPilha Vazia!");

            getch();
            break;

        case 6:
            if (mostra_pilha(lst))
                printf("\n\n-- FIM Pilha! -- \n");
            else
                printf("\nPilha Vazia!");

            getch();
            break;

        default:
            printf("\nPressione qualquer tecla para FINALIZAR...");
        }
    } while (op != 7);

    return 0;
}