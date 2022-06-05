typedef struct ponto Ponto;

Ponto *gera_pto();
int set_pto(Ponto *p, float X, float Y);
int get_pto(Ponto *p, float *X, float *Y);
float distancia_pto(Ponto *a, Ponto *b);
void libera_pto(Ponto **p);
