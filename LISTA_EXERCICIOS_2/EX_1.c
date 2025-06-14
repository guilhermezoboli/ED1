#include <stdio.h>
#include <stdlib.h>
#include "funcoes_lista_encadeada_N1.h"

int main(){
    Nolista *l;

    criarLista(&l);

    inserirElementoInicio(&l, 12);
    inserirElementoInicio(&l, 8);
    inserirElementoInicio(&l, 7);
    inserirElementoInicio(&l, 10);

    printf("LISTA 1:\n");
    imprime(&l);
    
    /*Nolista *l1;
    
    criarLista(&l1);
    
    inserirElementoInicio(&l1, 1);
    inserirElementoInicio(&l1, 2);
    inserirElementoInicio(&l1, 3);
    inserirElementoInicio(&l1, 4);
    
    printf("LISTA 2:\n");
    imprime(&l1);
    
    printf("NUMEROS MAIORES QUE 5 NA LISTA\n");
    printf("%d\n", maiores(&l, 0));
    
    l1 = concatena(&l, &l1);
    
    printf("LISTA CONCATENADA\n");
    imprime(&l1);
    
    Nolista *p;
    
    printf("ULTIMO ELEMENTO DE L1:\n");
    p = ultimo(&l);
    
    printf("%d\n", p->info);


    printf("SEPARACAO DE L:\n");
    Nolista *l2;
    l2 = separa(&l, 3);

    printf("L:\n");
    imprime(&l);
    
    printf("L2:\n");
    imprime(&l2);

    printf("IMPRIME REURSIVA:\n");
    imprimeRecursiva(&l);

    printf("BUSCAR ELEMENTO RECURSIVA\n");
    if(buscaRecursiva(&l, 12) != NULL){
        printf("ELEMENTO ENCONTRADO\n");
    }
    else{
        printf("ELEMENTO NAO ENCONTRADO\n");
    }

    Nolista *e;

    e = buscaRecursiva(&l, 12);
    printf("O ELEMENTO ENCONTRADO FOI O:%d\n", e);*/

    
    printf("REMOVER O ELEMENTO 12\n");
    removerElemento(&l, 12);
    
    imprime(&l);
    //liberarLista(&l);

}