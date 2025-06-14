#include <stdio.h>
#include <stdlib.h>

typedef struct nolista{
    int info;
    struct nolista *prox;
}NoLista;

void criarlista(NoLista **l){
    *l=NULL;
}

int estaVazia(NoLista **l){
    if(*l==NULL){
        return 1;
    }else{
        return 0;
    }
}

void imprime(NoLista **l){
    if(!estaVazia(l)){
        for(NoLista *p = *l; p!=NULL; p=p->prox){
            printf("%d ", p->info);
        }
        printf("\n");
    }else{
        printf("LISTA VAZIA!\n");
    }
}

void insereElemento(NoLista **l, int v){
    NoLista *novo=(NoLista*)malloc(sizeof(NoLista));
    if(novo!=NULL){
        novo->info=v;
        novo->prox=*l;
        *l=novo;
    }else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO!\n");
    }
}

int numElementos(NoLista **l){
    int num=0;
    if(!estaVazia(l)){
        for(NoLista *p = *l; p!=NULL; p=p->prox){
            num++;
        }
    }else{
        printf("LISTA VAZIA!\n");
    }
    return num;
}

NoLista* busca(NoLista **l, int v){
    for(NoLista *p = *l; p!=NULL; p=p->prox){
        if(p->info==v){
            return p;
        }
    }
    return NULL;
}

void removerElemento(NoLista **l, int v){
    NoLista *ant = NULL;
    NoLista *p;
    for(p = *l; p!=NULL && p->info != v; p=p->prox){
        ant=p;
    }
    if(p==NULL){
        printf("ELEMENTO NAO ENCONTRADO\n");
    }
    else{
        if(ant==NULL){
            *l=p->prox;
        }
        else{
            ant->prox=p->prox;
        }
    free(p);
    }
}

void liberarLista(NoLista **l){
    NoLista *p, *temp;
    for(p=*l; p!=NULL; p=temp){
        temp=p->prox;
        free(p);
    }
    *l=NULL;
}

void insereOrdenado(NoLista **l, int v){
    NoLista *p, *ant=NULL;
    for(p=*l; p!=NULL && p->info<v; p = p->prox){
        ant=p;
    }
    NoLista *novo= (NoLista*)malloc(sizeof(NoLista));
    if(novo!=NULL){
        novo->info = v;
        if(ant==NULL){
            novo->prox=*l;
            *l=novo;
        }
        else{
            novo->prox= p;
            ant->prox=novo;
        }
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }
}

NoLista* ponteiroULTIMO(NoLista **l){
    if(!estaVazia(l)){
        NoLista *p;
        for(p=*l; p->prox!=NULL; p=p->prox);
        return p;
    }
    else{
        return NULL;
    }
}