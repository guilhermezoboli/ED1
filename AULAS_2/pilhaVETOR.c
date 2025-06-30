#include <stdio.h>
#include <stdlib.h>
#include "pilhaVETOR.h"

Pilha *criarPilha(){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

int estaVazia(Pilha *p){
    return(p->n == 0);
}

int estaCheia(Pilha *p){
    return(p->n == MAX);
}

void push(Pilha *p, float v){
    if(!estaCheia(p)){
        p->info[p->n] = v;
        p->n++;
    }    
    else{
        printf("LISTA CHEIA\n");
    }
}

void imprime(Pilha *p){
    if(!estaVazia(p)){
        int i = (p->n)-1;
        for(i; i >= 0; i--){
            printf("%.2f\n", p->info[i]);
        }
    }  
    else{
        printf("LISTA VAZIA\n");
    }
}

float pop(Pilha *p){
    if(!estaVazia(p)){
        float v;
        v = p->info[(p->n)-1];
        p->n--;
        return v;
    }else{
        printf("LISTA VAZIA\n");
    }
}

void liberarPilha(Pilha *p){
    free(p);
}

