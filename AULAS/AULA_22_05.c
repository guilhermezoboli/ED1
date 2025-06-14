#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main () {

    Lista *l = criarlista();

    inserirElemento(l, 5);
    inserirElemento(l, 6);
    inserirElemento(l, 9);
    inserirElemento(l, 10);

    imprime(l);

    removerElementos(l, 4);
    imprime(l);

    return EXIT_SUCCESS;
}