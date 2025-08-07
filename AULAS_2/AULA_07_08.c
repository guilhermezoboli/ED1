#include <stdio.h>
#include <stdlib.h>

typedef struct arvore_int {
    int info;
    struct arvore_int* dir;
    struct arvore_int* esq;
} Arvorebin;

int estaVaziaBin(Arvorebin *arv){
    return (arv == NULL);
}

Arvorebin *insere(Arvorebin *a, int v){
    if(estaVaziaBin(a)){
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

void imprimeArvoreBin(Arvorebin *arv){
    printf("<");
    if(!estaVaziaBin(arv)){
        printf("%d", arv->info);
        imprimeArvoreBin(arv->esq);
        imprimeArvoreBin(arv->dir);
    }
    printf(">");
}

Arvorebin* remover(Arvorebin* a, int v){
    if(estaVaziaBin(a)){
        return NULL;
    }
    else{
        if(v < a->info){
            a->esq = remover(a->esq, v);
        }
        else if(v > a->info){
            a->dir = remover(a->dir, v);
        }
        else{
            if(a->esq == NULL && a->dir == NULL){//FOLHA
                free(a);
                a = NULL;
            }
            else if(a->dir == NULL){//filho a esquerda
                Arvorebin *t = a;
                a = a->esq;
                free(t);
            }
            else if(a->esq == NULL){//filho a direita
                Arvorebin *t = a;
                a = a->dir;
                free(t);
            }
            else{//filho dos dois lados
                Arvorebin *t = a->esq;
                while(t->dir != NULL){
                    t = t->dir;
                }
                a->info = t->info;
                t->info = v;
                a->esq = remover(a->esq, v);
            }
        }
    }
    return a;
}

int main(){
    Arvorebin *a = NULL;

    a = insere(a, 1);
    a = insere(a, 10);
    a = insere(a, 6);
    a = insere(a, 70);
    a = insere(a, 2);
    a = insere(a, 0);
    a = insere(a, -1);

    imprimeArvoreBin(a);
    printf("\n");

    remover(a, 10);

    imprimeArvoreBin(a);
    printf("\n");

    return 0;
}
