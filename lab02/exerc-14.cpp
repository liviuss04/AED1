#include <stdio.h>
#include <stdlib.h>

double *to_double(int *v, int n)
{
    double *aux;

    aux = (double *)malloc(n * sizeof(double));

    for (int i = 0; i < n; i++)
        aux[i] = v[i] * 1.00;

    return aux;
}

int main()
{
    int *vet_int, n;
    double *vet_double;

    printf("Digite a quantidade: ");
    scanf("%d", &n);

    vet_int = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &vet_int[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
        printf("inteiro v[%d] = %d\n", i, vet_int[i]);

    printf("\n");

    //conversão pra double
    vet_double = to_double(vet_int, n);


    for (int i = 0; i < n; i++)
        printf("double v[%d] = %.2lf\n", i, vet_double[i]);

    free(vet_int);
}