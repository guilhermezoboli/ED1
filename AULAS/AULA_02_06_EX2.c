#include <stdio.h>
#include <stdlib.h>
#include "listacomdescritor.h"

int main(){
    Descritor lista;
    criarlista(&lista);

    insereElementoInicio(&lista, 5);
    insereElementoInicio(&lista, 8);
    insereElementoInicio(&lista, 1);
    insereElementoInicio(&lista, 6);

    imprimeLista(&lista);
}