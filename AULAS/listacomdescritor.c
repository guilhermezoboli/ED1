#include <stdio.h>
#include <stdlib.h>

typedef struct nolista{
    int info;
    struct nolista* prox;
}NoLista;

typedef struct descritor{
    NoLista *prim;
    NoLista *ult;
    int n;
}Descritor;

void criarlista(Descritor *l){
    l->prim=l->ult=NULL;
    l->n=0;
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
    if(novo!=NULL){
        novo->info=v;
        novo->prox=l->prim;
        l->prim=novo;
        if(l->n==0){
            l->ult=novo;
        }
        l->n++;
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }
}

void insereElementoFim(Descritor *l, int v){
    NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo!=NULL){
        novo->info=v;
        novo->prox=NULL;
        if(!estaVazia(l)){
            l->ult->prox=novo;
            l->ult=novo;
        }
        else{
            l->ult=novo;
            l->prim=novo;
        }
        l->n++;
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }
}

void imprimeLista(Descritor *l){

    if(!estaVazia(l)){
        for(NoLista *p=l->prim; p!=NULL; p=p->prox){
            printf("%d ", p->info);
        }
        printf("\n");
    }
    else{
        printf("LISTA VAZIA\n");
    }
}

void removerElemento(Descritor *l, int v){
    NoLista *ant=NULL, *p;
    for(p= l->prim; p!=NULL && p->info!=v; p->prox){
        ant = p;
    }
    if(p==NULL){/*lista vazia*/
        printf("ELEMENTO NAO ENCONTRADO!\n");
        }
    else{
        if(ant==NULL){/*primeiro elemento*/
            l->prim=p->prox;
            if(l->prim==NULL){/*aqui verifica se o elemento que quero remover é o primeiro e o UNICO ELEMENTO da lista*/
                l->ult=NULL;
            }
        }
        else{//verifica se o elemento esta no meio da lista
            ant->prox = p->prox;
            if(ant->prox==NULL){
                l->ult=ant;
            }
        }
        free(p);
        l->n--;
    }
}

void liberarLista(Descritor*l){
    NoLista *p, *temp;
    for(p=l->prim; p!=NULL; p=temp){
        temp=p->prox;
        free(p);
    }
    l->prim=l->ult=NULL;
    l->n=0;
}

NoLista* buscarElemento(Descritor *l, int v){
    if(!estaVazia(l)){
        NoLista *p;
        for(p=l->prim; p!=NULL; p=p->prox){
            if(p->info==v){
                return p;
            }
        }
        return NULL;
    }
}