#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[] = "Jose Augusto" ;
    char *p;
    int en;

    p = &nome[0];

    //Exibindo a string.
    for(int i = 0; i<12; i++)
        printf("%c", *(p+i));
}
