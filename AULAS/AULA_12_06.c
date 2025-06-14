#include <stdlib.h>
#include <stdio.h>
#include "listaduplamenteencadeada.h"

int main(){
    NoLista *l;

    criarlista(&l);

    insereNoinicio(&l, 12);
    insereNoinicio(&l, 1);
    insereNoinicio(&l, 8);

    imprimeOrdemInversa(&l);

    removerElemento(&l, 12);

    imprimeOrdemInversa(&l);

    NoLista *p;
    p = ultimoElemento(&l);
    printf("%d \n", p->info);
}