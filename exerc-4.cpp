#include <stdio.h>
#include <math.h>

int main()
{
    double imc, massa, altura;

    printf("Insira sua massa: ");
    scanf("%lf", &massa);

    printf("Insira sua altura: ");
    scanf("%lf", &altura);

    imc = (massa / (pow(altura, 2)));

    if (imc < 18.5)
        printf("Magreza\n");
    else
    {
        if (18.5 <= imc && imc <= 24.9)
            printf("Saudavel\n");
        else
        {
            if (25 <= imc && imc <= 29.9)
                printf("Sobrepeso\n");
            else
            {
                if (30 <= imc && imc <= 34.9)
                    printf("Obesidade Grau I\n");
                else
                {
                    if (35 <= imc && imc <= 39.9)
                        printf("Obesidade Grau II (severa)\n");
                    else
                        printf("Obesidade Grau III (morbida)\n");
                }
            }
        }
    }
    return 0;
}