#include <stdio.h>
#include <stdlib.h>
#include "lista2.h"

int main(){
    NoLista *lista;
    criarlista(&lista);

    insereElemento(&lista, 3);
    insereElemento(&lista, 2);
    insereElemento(&lista, 5);

    printf("%d\n", numElementos(&lista));

    imprime(&lista);

    if(busca(&lista, 2)!=NULL){
        printf("ELEMENTO ENCONTRADO\n");
    }else{
        printf("O ELEMENTO NAO ESTA NA LISTA\n");
    }

    removerElemento(&lista, 5);

    imprime(&lista);

    liberarLista(&lista);
}