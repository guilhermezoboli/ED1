#include <stdio.h>
#include <stdlib.h>
#include "lista2.h"

int main(){
    NoLista *lista;
    criarlista(&lista);

    insereOrdenado(&lista, 8);
    insereOrdenado(&lista, 10);
    insereOrdenado(&lista, 2);
    insereOrdenado(&lista, 7);

    imprime(&lista);

    NoLista* p;
    p = ponteiroULTIMO(&lista);

    printf("%d\n", p->info);

    liberarLista(&lista);
}