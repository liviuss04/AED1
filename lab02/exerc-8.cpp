#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};

int calc_area(ponto *p1, ponto *p2){
    int a;

    a = (p2->x - p1->x) * (p2->y - p1->y);

    if(a<0) return a*(-1);
    else return a;
}

int main(){
    int area;
    ponto *p1, *p2;

    printf("Digite o primeiro ponto (x,y): ");
    scanf("%d %d", &p1->x, &p1->y);

    printf("Digite o segundo ponto (x,y): ");
    scanf("%d %d", &p2->x, &p2->y);

    area = calc_area(p1, p2);

    printf("A area do retangulo definido por (%d,%d) e (%d,%d) eh %d\n", p1->x, p1->y, p2->x, p2->y, area);

    return 0;
}