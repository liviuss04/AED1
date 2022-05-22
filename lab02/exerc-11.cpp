#include <stdio.h>
#include <stdlib.h>

void vetor(int tam, double v[], double *m, double *n)
{
    *m = v[0];
    *n = v[0];
    
    for (int i = 0; i < tam; i++)
    {
        // maior
        if (*m < v[i])
            *m = v[i];

        // menor
        if (*n > v[i])
            *n = v[i];
    }
}

int main()
{
    double *v, r, m, n;
    int tam;

    printf("Digite o tamanho do seu vetor: ");
    scanf("%d", &tam);

    v = (double *) malloc(tam * sizeof(double));

    for (int i = 0; i < tam; i++)
    {
        printf("%d = ", i + 1);
        scanf("%lf", &v[i]);
    }

    vetor(tam, v, &m, &n);

    printf("Vetor: ");
    for (int i = 0; i < tam; i++)
        printf("%.2lf ", v[i]);

    printf("\nMaior numero: %.2lf", m);
    printf("\nMenor numero: %.2lf", n);

    free(v);
}