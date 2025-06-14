#include <stdio.h>
#include <stdlib.h>

typedef struct nolista{
    int info;
    struct nolista *prox;
}NoLista;

typedef struct descritor{
    NoLista *prim;
    NoLista *ult;
    int n;
}Descritor;

void criarLista(Descritor *l){
    l->prim = l->ult = NULL;
    l->n = 0;
}

int estaVazia(Descritor *l){
    if(l->n == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void insereElementoInicio(Descritor *l, int v){
    NoLista *novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = l->prim;
        l->prim = novo;
        if(l->n == 0){
            l->ult = novo;
        }
        l->n ++;
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }
}

void insereElementoFim(Descritor *l, int v){
    NoLista *novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = l->ult->prox;
        if(!estaVazia(l)){
            l->ult->prox = novo;
            l->ult = novo;
        }
        else{
            l->ult = novo;
            l->prim = novo;
        }
        l->n++;
    }else{
        printf("NAO FOI POSSIVEL ALOCAR ESPAÇO\n");
    }
}

void imprimeLista(Descritor *l){
    NoLista *p;
    if(!estaVazia(l)){
        for(p = l->prim; p!= NULL; p = p->prox){
            printf("%d ", p->info);
        }
        printf("\n");
    }
    else{
        printf("LISTA VAZIA\n");
    }
}

void removerElemento(Descritor *l, int v){
    
}

void liberarLista(Descritor *l){

}

NoLista* buscarElemento(Descritor *l, int v){
}

int main(){
    Descritor l;

    criarLista(&l);

    insereElementoInicio(&l, 12);
    insereElementoInicio(&l, 13);

    imprimeLista(&l);
    
    insereElementoFim(&l, 1);
    insereElementoFim(&l, 2);
    
    imprimeLista(&l);
}