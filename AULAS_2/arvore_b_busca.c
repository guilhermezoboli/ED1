#include <stdio.h>
#include <stdlib.h>
#include <arvore_binaria.h>
#include <arvore_b_busca.h>

Arvorebin *busca(Arvorebin *a, int v){
    if(estaVazia(a)){
        return NULL;
    }
    else{
        if(a->info == v){
            return a;
        }
        else if(a->info > v){//na esquerda insere os valores menores
            return busca(a->esq, v);
        }
        else{//na direita os valores maiores;
            return busca(a->dir, v);
        }
    }
}

Arvorebin *insere(Arvorebin *a, int v){
    if(estaVazia(a)){
        a = (Arvorebin*)malloc(sizeof(Arvorebin));
        a->info = v;
        a->dir = a->esq = NULL;
    }
    else{
        if(v < a->info){
            a->esq = insere(a->esq, v);
        }
        else{
            a->dir = insere(a->dir, v);
        }
    }
    return a;
}

