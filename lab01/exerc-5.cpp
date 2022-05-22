#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, n, d = 1;

    printf("\nDigite um numero: ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", d);
            d = d + 1;
        }
        printf("\n");
    }

    return 0;
}
