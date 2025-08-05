#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

Arvore* criarArvoreVazia(){
    return NULL;
}

Arvore* criarArvore(char c, Arvore *sae, Arvore *sad){
    Arvore *a = (Arvore*)malloc(sizeof(Arvore));
    if(a!= NULL){
        a->info = c;
        a->esq = sae;
        a->dir = sad;
    }
    return a;
}

int estaVazia (Arvore *arv){
    return (arv == NULL);
}

void imprimeArvore(Arvore *arv){
    printf("<");
    if(!estaVazia(arv)){
        printf("%c", arv->info);
        imprimeArvore(arv->esq);
        imprimeArvore(arv->dir);
    }
    printf(">");
}

Arvore* liberarArv (Arvore *arv){
    if(!estaVazia(arv)){
        liberarArv(arv->esq);
        liberarArv(arv->dir);
        free(arv);
    }
    return NULL;
}

int pertence (Arvore *arv, char c){
    if(estaVazia(arv)){
        return 0;
    }
    else{
        if(arv->info == c){
            return 1;
        }
        else{
            return(pertence(arv->esq, c));
            return(pertence(arv->dir, c));
        }
    }
}

int numeroNos(Arvore *arv){
    if(estaVazia(arv)){
        return 0;
    }
    else{
        return 1 + numeroNos(arv->esq) + numeroNos(arv->dir);
    }
}