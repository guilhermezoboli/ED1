#include <stdio.h>
#include <stdlib.h>
#include "pilhaVETOR.h"

int main(){
    Pilha *p = criarPilha();

    push(p, 1);
    push(p, 2);
    push(p, 3);
    push(p, 4);

    imprime(p);

    float t;

    t = pop(p);

    printf("O POP FOI: %.2f\n", t);

    imprime(p);
}