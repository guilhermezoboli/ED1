#include <stdio.h>
#include <stdlib.h>
#include "filaVETOR.h"

int main(){
    Fila *f = criarFila();

    inserir(f, 1);
    inserir(f, 2);
    inserir(f, 3);
    inserir(f, 4);
    inserir(f, 5);

    imprimirFila(f);
    printf("\n");
    
    remover(f);
    
    imprimirFila(f);
    printf("\n");
    
    inserir(f, 6);
    
    imprimirFila(f);
    printf("\n");

    liberarFila(f);
}