#include <stdio.h>
#include <stdlib.h>
#include "filaENCADEADA.h"

int main(){
    Fila *f = criarfila();

    inserir(f, 1);
    inserir(f, 2);
    inserir(f, 3);
    inserir(f, 4);
    inserir(f, 5);
    inserir(f, 6);

    imprimeFila(f);

    float v = remover(f);

    printf("%.2f\n", v);

    imprimeFila(f);

    furaFila(f, 3);

    imprimeFila(f);

    liberarFila(f);
}