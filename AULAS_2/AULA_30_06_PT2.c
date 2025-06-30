#include <stdio.h>
#include <stdlib.h>
#include "pilhaENCADEADA.h"

int main(){

    Pilha* p = criarLista();

    push(p, 1);
    push(p, 2);
    push(p, 3);
    push(p, 4);

    imprimePilha(p);

    float l = pop(p);

    printf("POP: %.2f\n", l);

    imprimePilha(p);

    liberarPilha(p);
}

