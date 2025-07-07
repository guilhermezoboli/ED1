#include <stdio.h>
#include <stdlib.h>
#include "filaENCADEADA.h"

Fila *criarfila(){
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

int estaVazia(Fila *f){
    return(f->ini == NULL);
}

void inserir(Fila *f, float v){
    Nolista *novo = (Nolista*)malloc(sizeof(Nolista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = NULL;
        if(estaVazia(f)){
            f->ini = f->fim = novo;
        }
        else{
            f->fim->prox = novo;
            f->fim = novo;
        }
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }
}

void imprimeFila(Fila *f){
    if(!estaVazia(f)){
        Nolista *p;
        for(p = f->ini; p != NULL; p = p->prox){
            printf("%.2f ", p->info);
        }
        printf("\n");
    }
    else{
        printf("LISTA VAZIA\n");
    }
}

float remover(Fila *f){
    if(!estaVazia(f)){
        float prim;
        prim = f->ini->info;
        Nolista *aux;
        aux = f->ini;
        f->ini = aux->prox;
        if(f->ini == NULL){
            f->fim = NULL;
        }
        free(aux);
        return prim;
    }
    else{
        printf("LISTA VAZIA\n");
    }
}

void liberarFila(Fila *f){
    if(!estaVazia(f)){
        Nolista *p, *temp;
        for(p = f->ini; p != NULL; p = temp){
            temp = p->prox;
            free(p);
        }
    }
    else{
        printf("LISTA VAZIA\n");
    }
    free(f);
}

void furaFila(Fila *f, float v){
    if(!estaVazia(f)){
        Nolista *p, *ant = NULL;
        for(p = f->ini; p != NULL && p->info != v; p = p->prox){
            ant = p;
        }
        if(p == NULL){
            printf("ELEMENTO NAO ENCONTRADO\n");
        }

        if(ant == NULL){
            return;
        }

        ant->prox = p->prox;

        if(p == f->fim){
            f->fim = ant;
        }

        p->prox = f->ini;
        f->ini = p;
    }
    else{
        printf("LISTA VAZIA\n");
    }
}