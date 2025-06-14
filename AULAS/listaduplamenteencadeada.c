#include <stdio.h>
#include <stdlib.h>

typedef struct nolista{
    int info;
    struct nolista *prox;
    struct nolista *ant;
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

void insereNoinicio(NoLista** lista, int v) {
    NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
    if (novo == NULL) {
        printf("NAO FOI POSSIVEL ALOCAR MEMORIA\n");
        return; 
    }
    novo->info = v;
    novo->prox = *lista;
    novo->ant = NULL;
    if (*lista != NULL) {
        (*lista)->ant = novo; 
    }
    *lista = novo;
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

void removerElemento(NoLista** l, int  v) {
    if(!estaVazia(l)) {
        NoLista* p;
        for(p=*l; p->prox!=NULL&&p->info!=v; p=p->prox);
            if(p->ant==NULL) {
            *l=p->prox;
            p->prox->ant=NULL;
            free(p);
        }
        else if(p->prox==NULL&&p->info==v) {
           p->ant->prox=NULL;
            free(p);
        }
        else if(p->prox!=NULL&&p->ant!=NULL) {
            p->ant->prox=p->prox;
            p->prox->ant=p->ant;
            free(p);
        }
        else 
        printf("Elemento nao encontrado\n");
    }
    else 
    printf("Lista vazia\n");
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

NoLista *ultimoElemento(NoLista **l){
    if(!estaVazia(l)) {
        NoLista *p;
        for (p = *l; p->prox != NULL; p = p->prox){}
        return p;
    } 
    else {
        return NULL;
    }
}

void imprimeOrdemInversa(NoLista **l){
    NoLista *p;
    if(!estaVazia(l)){
        for(p=ultimoElemento(l); p!=NULL; p = p->ant)
        printf("%d ", p->info);
    } 
    else{
        printf("Lista vazia! \n");
    }
    printf("\n");
}

