#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y;
    double d;

    printf("Entre com a coordenada x: ");
    scanf("%d", &x);

    printf("Entre com a coordenada y: ");
    scanf("%d", &y);

    d = sqrt((x*x)+(y*y));

    printf("\nA distancia entre os pontos (%d,%d) e (0,0) eh %.1lf ", x, y, d);

}
