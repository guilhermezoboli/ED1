#include <stdio.h>
#include <stdlib.h>
#include "listacomdescritor.h"

int main(){
    Descritor lista;
    criarlista(&lista);

    insereElementoInicio(&lista, 5);
    insereElementoInicio(&lista, 8);
    
    imprimeLista(&lista);

    insereElementoFim(&lista, 10);

    printf("\n");
    imprimeLista(&lista);

    removerElemento(&lista, 8);

    printf("\n");
    imprimeLista(&lista);

    printf("BUSCANDO ELEMENTO\n");
    NoLista *p = buscarElemento(&lista, 10);
    if(p!=NULL){
        printf("ELEMENTO ENCONTRADO\n");
        printf("%d\n", p->info);
    }

    liberarLista(&lista);
    
    printf("\n");
    imprimeLista(&lista);
} 