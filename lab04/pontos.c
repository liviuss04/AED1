#include <math.h>
#include "ponto.h"
#include <stdlib.h>

struct ponto{
    float x, y;
};

Ponto *gera_pto(){
    Ponto * p;
    p = (Ponto *) malloc(sizeof(Ponto));

    if(p == NULL){
        // printf("ERRO!\n"); 
        return 0; //Retorna erro
    }

    return p;
}

int set_pto(Ponto *p, float X, float Y){
    if(p == NULL ) return 0; // Falha

    p->x = X;
    p->y = Y;

    return 1; // Sucesso
}

int get_pto(Ponto *p, float *X, float *Y){
    if(p == NULL) return 0; //Falha

    *X = p->x;
    *Y = p->y;

    return 1; // Sucesso  
}

float distancia_pto(Ponto *a, Ponto *b){
    float distancia;
    
    if(a == NULL && b == NULL)
        return 0;

    distancia = sqrt(pow((a->x - b->x), 2) + pow((a->y - b->y), 2)); 

    return distancia;
}

void libera_pto(Ponto ** p){
    free(*p);
    *p = NULL;
}


