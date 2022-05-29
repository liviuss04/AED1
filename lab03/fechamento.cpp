#include <stdio.h>
#include <stdlib.h>

struct individuo
{
    int codigo_genetico;     // valores binarios aleatorios
    double aptidao_abs;      // pontencial de cada individuo (0.0 <= aptidao <= 10.0)
    double aptidao_relativa; // deve ser calculada em tempo de execu��o...
};

struct populacao
{
    struct individuo *pop; // um vetor de N individuos
    int tamanho;           // tamanho N da popula��o (N = 100)
};

typedef struct populacao populacao;
typedef struct individuo individuo;

int main()
{
    populacao p;

    int n, id1, id2;
    double total = 0, sorteio, soma = 0;

    printf("Digite a qtd de individuos: ");
    scanf("%d", &n);

    p.pop = (individuo *)malloc(n * sizeof(individuo));

    // Leitura
    for (int i = 0; i < n; i++)
    {
        printf("\n\n\tindividuo %d\n", i + 1);
        printf("\nDigite o codigo genetico: ");
        scanf("%d", &p.pop[i].codigo_genetico);

        printf("\nDigite a aptidao absoluta: ");
        scanf("%lf", &p.pop[i].aptidao_abs);

        printf("\nAptd abs: %.2f", p.pop[i].aptidao_abs);

        total = p.pop[i].aptidao_abs + total;
    }

    // Mostra todas as aptd relativas
    // for (int i = 0; i < n; i++)
    // {
    //     p.pop[i].aptidao_relativa = p.pop[i].aptidao_abs / total;
    //     printf("\nAptd rel: %.2f", p.pop[i].aptidao_relativa);
    // }

    // Sorteio
    sorteio = ((double)rand()) / ((double)RAND_MAX);

    // Mostra numero sorteado
    // printf("\n\n\t\tS: %f\n\n", sorteio);

    // Individuo 1
    for (int i = 0; i < n; i++)
    {
        soma = soma + p.pop[i].aptidao_relativa;
        if (sorteio <= soma)
        {

            // Mostra aptd relativa individuo 1
            // printf("aptd relativa %d: %f\n", i, p.pop[i].aptidao_relativa);

            id1 = p.pop[i].codigo_genetico;

            break;
        }
    }

    // Individuo 2
    for (int i = 0; i < n; i++)
    {
        soma = soma + p.pop[i].aptidao_relativa;
        if (sorteio <= soma && p.pop[i].codigo_genetico != id1)
        {

            // Mostra aptd relativa individuo 2
            // printf("aptd relativa %d: %f\n", i, p.pop[i].aptidao_relativa);

            id2 = p.pop[i].codigo_genetico;

            break;
        }
    }

    printf("par_001 = (ind-%d, ind-%d)\n", id1, id2);

    return 0;
}
