#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor, tam = 5;

    vetor = (int *) malloc(tam * sizeof(int));

    for (int i = 0; i < tam; i++)
    {
        printf("Entre com numero [%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tam; i++)
        printf("vetor[%d] = %d\n", i+1, vetor[i]);

    free(vetor);

    return 0;
}