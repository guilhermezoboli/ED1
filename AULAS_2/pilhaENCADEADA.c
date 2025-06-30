#include <stdio.h>
#include <stdlib.h>
#include "pilhaENCADEADA.h"

Pilha* criarLista(){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

int estaVazia(Pilha *p){
    return(p->prim == NULL);
}

void push(Pilha *p, float v){
    NoLista *novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = p->prim;
        p->prim = novo;
    } 
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }  
}

void imprimePilha(Pilha *p){
    if(!estaVazia(p)){
        for(NoLista *i = p->prim; i != NULL; i = i->prox){
            printf("%.2f\n", i->info);
        }
    }else{
        printf("Lista vazia\n");
    }
}

float pop(Pilha *p){
    if(!estaVazia(p)){
        float aux;
        NoLista *temp;
        temp = p->prim;
        aux = temp->info;
        p->prim = temp->prox;
        free(temp);
        return aux;
    }
    else{
        printf("LISTA VAZIA\n");
    }
}

void liberarPilha(Pilha *p){
    NoLista *t, *temp;
    for(t = p->prim; t != NULL; t = temp){
        temp = t->prox;
        free(t);
    }
}