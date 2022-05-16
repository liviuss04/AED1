#include <stdio.h>
#include <math.h>

int main()
{
    double x[5], s=0, m, d, aux;

    printf("<<Media e desvio-padrao>>\n");


    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &x[i]);

        s = s + x[i];

        aux = s;
    }

    m = (aux / 5);

    d = sqrt((pow((x[0]-m),2)+pow((x[1]-m),2)+pow((x[2]-m),2)+pow((x[3]-m),2)+pow((x[4]-m),2))/4);


    printf("A media e %.0lf e o desvio-padrao e %lf\n", m, d);

    return 0;
}