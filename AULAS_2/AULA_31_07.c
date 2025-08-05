#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main(){
    Arvore* a = criarArvore('a', criarArvore('b', criarArvore('d', criarArvoreVazia(), criarArvoreVazia()), criarArvoreVazia()),
                    criarArvore('c', criarArvore('e', criarArvoreVazia(), criarArvoreVazia()), criarArvore('f', criarArvoreVazia(), criarArvoreVazia()))
    );

    imprimeArvore(a);
    printf("\n");

    if(pertence(a, 's') == 1){
        printf("pertence\n");
    }
    else{
        printf("nao pertence\n");
    }

    printf("%d\n", numeroNos(a));
    liberarArv(a);
}