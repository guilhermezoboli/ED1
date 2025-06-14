#include <stdio.h>
#include <stdlib.h>

typedef struct nolista{
    int info;
    struct nolista *prox;
}Nolista;

typedef struct lista{
    Nolista *cab;
    Nolista *cau;
}Lista;

void criarLista(Lista *l){
    l->cab = (Nolista*)malloc(sizeof(Nolista));
    l->cau = (Nolista*)malloc(sizeof(Nolista));
    l->cab->prox = l->cau;
    l->cau->prox = NULL;
}

int estaVazia(Lista *l){
    if(l->cab->prox == l->cau){
        return 1;
    }
    return 0;
}

void inserirElementoInicio(Lista *l, int v){
    Nolista *novo = (Nolista*)malloc(sizeof(Nolista));
    if(novo!=NULL){
        novo->info = v;
        novo->prox = l->cab->prox;
        l->cab->prox = novo;
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }
}

void inserirElementoFim(Lista *l, int v){
    Nolista *novo = (Nolista*)malloc(sizeof(Nolista));
    if(novo != NULL){
        novo->prox = NULL;
        l->cau->info = v;
        l->cau->prox = novo;
        l->cau = novo;
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }
}

void imprime(Lista *l){
    if(!estaVazia(l)){
        Nolista *p;
        for(p = l->cab->prox; p != l->cau; p = p->prox){
            printf("%d ", p->info);
        }
        printf("\n");
    }   
}

void removerElemento(Lista *l, int v){
    Nolista *p;
    Nolista *ant = l->cab;
    for(p = l->cab->prox; p->info != v && p != l->cau; p = p->prox){
         ant = p;
    }
    if(p == l->cau){
        printf("ELEMENTO NAO ENCONTRADO\n");
    }
    else{
        ant->prox = p->prox;
        free(p); 
    }
}

void liberarLista(Lista *l){
    if(!estaVazia(l)){
        Nolista *p;
        for(p = l->cab->prox; p != l->cau; p = l->cab->prox){
            l->cab->prox = p->prox;
            free(p);
        }
        printf("LISTA ESVAZIADA\n");
    }
    else{
        printf("LISTA VAZIA\n");
    } 
}

