#include <stdio.h>
#include <stdlib.h>
#include "listacabecaecauda.h"

int main(){
    Lista lista;

    criarLista(&lista);

    inserirElementoInicio(&lista, 10);
    inserirElementoInicio(&lista, 2);
    inserirElementoInicio(&lista, 5);
    inserirElementoInicio(&lista, 1);

    imprime(&lista);

    inserirElementoFim(&lista, 11);
    inserirElementoFim(&lista, 4);

    imprime(&lista);

    removerElemento(&lista, 5);

    imprime(&lista);

    liberarLista(&lista);
}