#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};


void inc_dir(ponto *p, char c){
    if(c == 'l') p->x = p->x + 1;
    if(c == 'o') p->x = p->x - 1;
    if(c == 'n') p->y = p->y + 1;
    if(c == 's') p->y = p->y - 1;
}

int main(){

    ponto *p;
    char ch;

    printf("Digite a coordenada x: ");
    scanf("%d", &p->x);

    printf("Digite a coordenada y: ");
    scanf("%d", &p->y);

    setbuf(stdin, NULL);
    printf("Digite a direcao: ");
    scanf("%c", &ch);

    inc_dir(p, ch);

    printf("Nova posicao: (%d,%d)", p->x, p->y);



}