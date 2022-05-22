#include <stdio.h>

int main()
{
    int n = 10, fat = 1, aux;

    printf("<<Fatorial>>\n");

    for (int i = 1; i <= n; i++)
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